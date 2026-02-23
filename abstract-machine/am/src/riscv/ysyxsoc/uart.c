#include <am.h>
#define UART_BASE 0x10000000
#define UART_TX 0
#define UART_RX 0
#define UART_LSB 0
#define UART_MSB 1
#define UART_IER 1
#define UART_FIFO 2
#define UART_LCR 3
#define UART_LSR 5

// 9600 = 0x2580
static void uart16550_config() {
    *((volatile char*)UART_BASE + UART_LCR) = 0x80; //打开DLAB，设置8N1
    *((volatile char*)UART_BASE + UART_MSB) = 0x00; // 配置波特率
    *((volatile char*)UART_BASE + UART_LSB) = 0x01; //
    *((volatile char*)UART_BASE + UART_LCR) = 0x07; //  关闭DLAB
    *((volatile char*)UART_BASE + UART_IER) = 0x00; // 关闭所有中断
    *((volatile char*)UART_BASE + UART_FIFO) = 0xC7;// 清空消息队列
}

void _uart_init() {
    uart16550_config();
}

void __am_uart_rx(AM_UART_RX_T *rx) {
    if((*((volatile char*)UART_BASE + UART_LSR) & 0x01) == 0)  // 判断是否有数据可读
        rx->data = 0xff; // 没有数据，返回0xff
    else rx->data = *((volatile char*)UART_BASE + UART_RX);
}