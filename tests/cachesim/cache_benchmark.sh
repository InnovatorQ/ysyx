#!/bin/bash

# 编译cachesim
echo "Compiling cachesim..."
g++ -std=c++11 -O2 -Wall -o ./build/cachesim_configurable cachesim_configurable.cpp

if [ $? -ne 0 ]; then
    echo "Compilation failed!"
    exit 1
fi

# 检查trace文件
ITRACE_FILE="build/itrace.bin.bz2"
DTRACE_FILE="build/dtrace.bin.bz2"

if [ ! -f "$ITRACE_FILE" ]; then
    echo "Warning: $ITRACE_FILE not found"
    ITRACE_FILE="build/4_16.bz2"
fi

if [ ! -f "$DTRACE_FILE" ]; then
    echo "Warning: $DTRACE_FILE not found, using itrace for both"
    DTRACE_FILE="$ITRACE_FILE"
fi

echo "=== ICache + DCache Performance Evaluation ==="
echo "Using itrace: $ITRACE_FILE"
echo "Using dtrace: $DTRACE_FILE"

echo ""
echo "=== Cache Configuration Comparison ==="
echo "ICache(S/W/B) DCache(S/W/B) | IHit% DHit% ITotalCycles DTotalCycles"
echo "=================================================================="

# 测试配置 (i_sets i_ways i_block d_sets d_ways d_block)
configs=(
    "16 1 16 16 1 16"    # 直接映射
    "8 2 16 8 2 16"      # 2路组相联
    "4 4 16 4 4 16"      # 4路组相联
    "16 1 32 16 1 32"    # 大块直接映射
    "8 2 32 8 2 32"      # 大块2路组相联
    "32 1 16 32 1 16"    # 更多组
)

results=()

for config in "${configs[@]}"; do
    read -r i_sets i_ways i_block d_sets d_ways d_block <<< "$config"
    
    echo -n "Testing I($i_sets/$i_ways/${i_block}B) D($d_sets/$d_ways/${d_block}B)... "
    
    output=$(./build/cachesim_configurable $i_sets $i_ways $i_block $d_sets $d_ways $d_block $ITRACE_FILE $DTRACE_FILE 2>/dev/null)
    
    if [ $? -eq 0 ]; then
        # 提取ICache统计
        i_hit_rate=$(echo "$output" | grep -A 10 "=== ICache Statistics ===" | grep "Hit Rate:" | awk '{print $3}' | sed 's/%//')
        i_tmt=$(echo "$output" | grep -A 10 "=== ICache Statistics ===" | grep "Total Memory Time (TMT):" | awk '{print $5}')
        
        # 提取DCache统计
        d_hit_rate=$(echo "$output" | grep -A 10 "=== DCache Statistics ===" | grep "Hit Rate:" | awk '{print $3}' | sed 's/%//')
        d_tmt=$(echo "$output" | grep -A 10 "=== DCache Statistics ===" | grep "Total Memory Time (TMT):" | awk '{print $5}')
        
        printf "%2d/%d/%2dB %2d/%d/%2dB | %5.1f%% %5.1f%% %10s %10s\n" \
            $i_sets $i_ways $i_block $d_sets $d_ways $d_block $i_hit_rate $d_hit_rate $i_tmt $d_tmt
        
        # 计算总周期数用于排序
        total_cycles=$((i_tmt + d_tmt))
        results+=("$total_cycles $i_hit_rate $d_hit_rate $i_sets $i_ways $i_block $d_sets $d_ways $d_block")
    else
        echo "FAILED"
    fi
done

echo ""
echo "=== Best Configurations by Total Cycles ==="
echo "TotalCycles | IHit% DHit% ICache(S/W/B) DCache(S/W/B)"
echo "======================================================="

printf '%s\n' "${results[@]}" | sort -n | head -3 | while read -r total i_hit d_hit i_s i_w i_b d_s d_w d_b; do
    printf "%11s | %5.1f%% %5.1f%% %2d/%d/%2dB %2d/%d/%2dB\n" $total $i_hit $d_hit $i_s $i_w $i_b $d_s $d_w $d_b
done

echo ""
echo "=== DCache Benefit Analysis ==="
echo "Comparing with and without DCache (same ICache config)"

# 使用最佳ICache配置测试DCache收益
best_i_config="8 2 16"
read -r i_sets i_ways i_block <<< "$best_i_config"

echo "ICache: $i_sets sets, $i_ways ways, ${i_block}B blocks"

# 无DCache (使用1组1路4B模拟无cache)
no_dcache_output=$(./build/cachesim_configurable $i_sets $i_ways $i_block 1 1 4 $ITRACE_FILE $DTRACE_FILE 2>/dev/null)
no_dcache_total=$(echo "$no_dcache_output" | grep -A 10 "=== DCache Statistics ===" | grep "Total Memory Time (TMT):" | awk '{print $5}')

# 有DCache
with_dcache_output=$(./build/cachesim_configurable $i_sets $i_ways $i_block 8 2 16 $ITRACE_FILE $DTRACE_FILE 2>/dev/null)
with_dcache_total=$(echo "$with_dcache_output" | grep -A 10 "=== DCache Statistics ===" | grep "Total Memory Time (TMT):" | awk '{print $5}')
with_dcache_hit=$(echo "$with_dcache_output" | grep -A 10 "=== DCache Statistics ===" | grep "Hit Rate:" | awk '{print $3}' | sed 's/%//')

if [ -n "$no_dcache_total" ] && [ -n "$with_dcache_total" ]; then
    improvement=$(echo "scale=2; ($no_dcache_total - $with_dcache_total) * 100 / $no_dcache_total" | bc -l)
    echo "Without DCache: $no_dcache_total cycles"
    echo "With DCache:    $with_dcache_total cycles (${with_dcache_hit}% hit rate)"
    echo "Improvement:    ${improvement}% cycle reduction"
fi

# 清理
rm -f ./build/cachesim_configurable
