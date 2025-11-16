// 负责根据控制信号控制存储器, 从存储器中读出数据, 或将数据写入存储器
module LSU(
    input [3:0]     load,
    input [3:0]     store,
    input [31:0]    mem_addr,
    input [31:0]    st_data,
    output[31:0]    load_data
);  
    wire [31:0] mem_rdata;
    wire [1:0]  byte_offset;
    wire [7:0]  selected_byte;
    
    assign mem_rdata = (load != 4'h0) ? pmem_read(mem_addr) : 32'b0;
    assign byte_offset = mem_addr[1:0];
    // always @(mem_addr) begin
    //     $display("mem_addr : %08x", mem_addr);
    // end
    

    assign selected_byte = (byte_offset == 2'b00) ? mem_rdata[7:0] :
                          (byte_offset == 2'b01) ? mem_rdata[15:8] :
                          (byte_offset == 2'b10) ? mem_rdata[23:16] :
                                                   mem_rdata[31:24];
    
    assign load_data = (load == 4'hf) ? mem_rdata :
                       (load == 4'h1) ? {24'b0, selected_byte} :
                       32'b0;

    always @(*) begin
        if (store != 4'h0) begin
            if (store == 4'h1) begin // sb指令
                pmem_write(mem_addr, st_data << (byte_offset * 8), 1 << byte_offset);
            end else begin // sw指令
                pmem_write(mem_addr, st_data, 8'hf);
            end
        end
    end
endmodule
