#!/bin/bash

output_file="/home/qzx/ysyx/ysyx-workbench/ysyx_25110269/build/cpu_info.txt"
mkdir -p "$(dirname "$output_file")"
> "$output_file"

for dir in /home/qzx/ysyx/ysyx-workbench/ysyx_25110269/result/ysyx_25110269*-*MHz; do
    if [ -d "$dir" ]; then
        name=$(basename "$dir")
        
        # Extract module name
        if [[ "$name" == "ysyx_25110269-"* ]]; then
            display_name="top"
        else
            display_name=$(echo "$name" | sed 's/ysyx_25110269_\([^-]*\)-.*/\1/')
        fi
        
        # Extract frequency from .rpt file
        rpt_file=$(find "$dir" -name "*.rpt" | head -1)
        freq="N/A"
        if [ -f "$rpt_file" ]; then
            freq=$(grep "core_clock.*max" "$rpt_file" | grep -v "NA" | head -1 | awk -F'|' '{print $(NF-1)}' | awk '{print $1}')
            if [ -n "$freq" ] && [ "$freq" != "NA" ]; then
                freq="${freq}MHz"
            else
                freq="N/A"
            fi
        fi
        
        # Extract chip area from synth_stat_fixed.txt
        stat_file="$dir/synth_stat_fixed.txt"
        if [ -f "$stat_file" ]; then
            total_area=$(grep "Chip area for module" "$stat_file" | grep -o '[0-9]\+\.[0-9]\+' | head -1)
            seq_line=$(grep "of which used for sequential elements" "$stat_file")
            seq_area=$(echo "$seq_line" | grep -o '[0-9]\+\.[0-9]\+' | head -1)
            percentage=$(echo "$seq_line" | grep -o '([0-9]\+\.[0-9]\+%)' | tr -d '()')
            
            printf "%-40s Frequency=%-12s Area=%-12s Sequential=%-12s (%s)\n" "$display_name:" "$freq" "$total_area" "$seq_area" "$percentage" >> "$output_file"
        fi
    fi
done

echo "Results saved to $output_file"
