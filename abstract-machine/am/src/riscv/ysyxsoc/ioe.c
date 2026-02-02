#define UART_BASE 0x10000000
#define UART_TX 0
#define UART_LSB 0
#define UART_MSB 1
#define UART_IER 1
#define UART_FIFO 2
#define UART_LCR 3

// 9600 = 0x2580
static void uart16550_config() {
    *((volatile char*)UART_BASE + UART_LCR) = 0x83; //打开DLAB，设置8N1
    *((volatile char*)UART_BASE + UART_MSB) = 0x00; // 配置波特率
    *((volatile char*)UART_BASE + UART_LSB) = 0x01; //
    *((volatile char*)UART_BASE + UART_LCR) = 0x03; //  关闭DLAB
    *((volatile char*)UART_BASE + UART_IER) = 0x00; // 关闭所有中断
    *((volatile char*)UART_BASE + UART_FIFO) = 0xC7;// 清空消息队列
}

void uart_init() {
    uart16550_config();
}

