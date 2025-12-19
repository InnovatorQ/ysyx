// 负责根据控制信号控制存储器, 从存储器中读出数据, 或将数据写入存储器
module LSU(
    input [3:0]     load,
    input           load_sign,
    input [3:0]     store,
    input [31:0]    mem_addr,
    input [31:0]    st_data,
    output[31:0]    load_data
);  
    wire [31:0] mem_rdata;
    wire [1:0]  byte_offset;
    wire [7:0]  selected_byte;
    wire [15:0] selected_halfword;
    
    assign mem_rdata = (load != 4'h0) ? pmem_read(mem_addr) : 32'b0;
    assign byte_offset = mem_addr[1:0];
    
    assign selected_byte = (byte_offset == 2'b00) ? mem_rdata[7:0] :
                          (byte_offset == 2'b01) ? mem_rdata[15:8] :
                          (byte_offset == 2'b10) ? mem_rdata[23:16] :
                                                   mem_rdata[31:24];
    
    assign selected_halfword = (byte_offset[1] == 1'b0) ? mem_rdata[15:0] : mem_rdata[31:16];
                                                       

    assign load_data = (load == 4'hf) ? mem_rdata :
                       (load == 4'h3) ? (load_sign ? {{16{selected_halfword[15]}}, selected_halfword} : {16'b0, selected_halfword}) :
                       (load == 4'h1) ? (load_sign ? {{24{selected_byte[7]}}, selected_byte} : {24'b0, selected_byte}) :
                       32'b0;

    always @(*) begin
        case (store)
            4'hf: pmem_write(mem_addr, st_data, 8'b1111);
            4'h3: pmem_write(mem_addr, st_data << (byte_offset * 8), 3 << byte_offset);
            4'h1: pmem_write(mem_addr, st_data << (byte_offset * 8), 1 << byte_offset);
            default: pmem_write(mem_addr, 32'b0, 8'b0000);
        endcase
    end
endmodule
