#!/usr/bin/env python3
import re
import matplotlib.pyplot as plt
import numpy as np
import sys
import os

def parse_mtrace_log(filename):
    """解析包含MTRACE的日志文件"""
    addresses = []
    instruction_numbers = []
    operations = []
    
    with open(filename, 'r') as f:
        total_inst_num = 0
        for line in f:
            # 计算所有指令（包含INST=的行）
            if 'INST=' in line:
                total_inst_num += 1
            
            # 匹配MTRACE格式: MTRACE[操作]: read/write 地址 from 位置 at PC=地址
            match = re.search(r'MTRACE\[(\w+)\]:\s+(\w+)\s+0x([0-9a-fA-F]+)', line)
            if match:
                op_type = match.group(1)
                rw_type = match.group(2)
                addr = int(match.group(3), 16)
                addresses.append(addr)
                instruction_numbers.append(total_inst_num)
                operations.append(f"{op_type}_{rw_type}")
    
    return addresses, instruction_numbers, operations

def plot_spatial_locality(addresses, instruction_numbers, output_dir):
    """绘制空间局部性"""
    plt.figure(figsize=(12, 6))
    
    # 计算相邻访问的地址差（空间局部性指标）
    spatial_distances = []
    for i in range(len(addresses)-1):
        spatial_distances.append(abs(addresses[i+1] - addresses[i]))
    
    plt.plot(instruction_numbers[:-1], spatial_distances, linewidth=0.8, alpha=0.7)
    plt.xlabel('Instruction Number')
    plt.ylabel('Spatial Distance (bytes)')
    plt.title('Spatial Locality - Lower is Better')
    plt.yscale('log')
    plt.grid(True, alpha=0.3)
    plt.tight_layout()
    plt.savefig(os.path.join(output_dir, 'spatial_locality.png'), dpi=150)
    plt.close()

def plot_temporal_locality(addresses, instruction_numbers, output_dir):
    """绘制时间局部性"""
    # 计算每个地址的重用距离
    temporal_distances = []
    addr_last_seen = {}
    
    for i, addr in enumerate(addresses):
        if addr in addr_last_seen:
            # 计算重用距离
            reuse_dist = instruction_numbers[i] - instruction_numbers[addr_last_seen[addr]]
            temporal_distances.append(reuse_dist)
        else:
            temporal_distances.append(float('inf'))  # 首次访问
        addr_last_seen[addr] = i
    
    # 过滤掉无穷大值
    finite_distances = [d for d in temporal_distances if d != float('inf')]
    finite_inst_nums = [instruction_numbers[i] for i, d in enumerate(temporal_distances) if d != float('inf')]
    
    if finite_distances:
        plt.figure(figsize=(12, 6))
        plt.plot(finite_inst_nums, finite_distances, linewidth=0.8, alpha=0.7)
        plt.xlabel('Instruction Number')
        plt.ylabel('Temporal Distance (instructions)')
        plt.title('Temporal Locality - Lower is Better')
        plt.yscale('log')
        plt.grid(True, alpha=0.3)
        plt.tight_layout()
        plt.savefig(os.path.join(output_dir, 'temporal_locality.png'), dpi=150)
        plt.close()

def plot_access_pattern(addresses, instruction_numbers, output_dir):
    """绘制访问模式综合分析"""
    if len(addresses) < 2:
        return
    
    plt.figure(figsize=(12, 10))
    
    # 计算空间局部性指标
    spatial_distances = [abs(addresses[i+1] - addresses[i]) for i in range(len(addresses)-1)]
    
    # 计算时间局部性指标
    temporal_distances = []
    addr_last_seen = {}
    for i, addr in enumerate(addresses):
        if addr in addr_last_seen:
            temporal_distances.append(instruction_numbers[i] - instruction_numbers[addr_last_seen[addr]])
        addr_last_seen[addr] = i
    
    # 子图1: 空间局部性分布
    plt.subplot(3, 1, 1)
    plt.hist(spatial_distances, bins=min(50, len(set(spatial_distances))), alpha=0.7, edgecolor='black')
    plt.xlabel('Spatial Distance (bytes)')
    plt.ylabel('Frequency')
    plt.title('Spatial Locality Distribution - More Left is Better')
    plt.xscale('log')
    plt.grid(True, alpha=0.3)
    
    # 子图2: 时间局部性分布
    plt.subplot(3, 1, 2)
    if temporal_distances:
        plt.hist(temporal_distances, bins=min(50, len(set(temporal_distances))), alpha=0.7, edgecolor='black')
        plt.xlabel('Temporal Distance (instructions)')
        plt.ylabel('Frequency')
        plt.title('Temporal Locality Distribution - More Left is Better')
        plt.xscale('log')
        plt.grid(True, alpha=0.3)
    
    # 子图3: 局部性综合评分
    plt.subplot(3, 1, 3)
    # 计算局部性评分（越小越好）
    spatial_score = np.mean(spatial_distances)
    temporal_score = np.mean(temporal_distances) if temporal_distances else 0
    
    scores = ['Spatial\nLocality', 'Temporal\nLocality']
    values = [spatial_score, temporal_score]
    colors = ['red' if v > np.median([spatial_score, temporal_score]) else 'green' for v in values]
    
    plt.bar(scores, values, color=colors, alpha=0.7)
    plt.ylabel('Average Distance (Lower is Better)')
    plt.title('Locality Performance Summary')
    plt.yscale('log')
    plt.grid(True, alpha=0.3)
    
    plt.tight_layout()
    plt.savefig(os.path.join(output_dir, 'access_pattern.png'), dpi=150)
    plt.close()

def main():
    if len(sys.argv) != 2:
        print("用法: python memory_locality_analyzer.py <log_file>")
        sys.exit(1)
    
    filename = sys.argv[1]
    output_dir = os.path.dirname(filename)
    
    try:
        addresses, instruction_numbers, operations = parse_mtrace_log(filename)
        print(f"解析了 {len(addresses)} 个内存访问")
        
        if not addresses:
            print("未找到有效的MTRACE记录")
            return
        
        # 生成三种局部性分析图
        plot_spatial_locality(addresses, instruction_numbers, output_dir)
        plot_temporal_locality(addresses, instruction_numbers, output_dir)
        plot_access_pattern(addresses, instruction_numbers, output_dir)
        
        print("Analysis completed. Generated image files:")
        print(f"- {output_dir}/spatial_locality.png: Spatial Locality")
        print(f"- {output_dir}/temporal_locality.png: Temporal Locality") 
        print(f"- {output_dir}/access_pattern.png: Access Pattern")
        
    except FileNotFoundError:
        print(f"错误: 找不到文件 {filename}")
    except Exception as e:
        print(f"错误: {e}")

if __name__ == "__main__":
    main()
