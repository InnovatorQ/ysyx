#include <am.h>
#include <klib-macros.h>
#include <stdio.h>

void __am_timer_init();
void init_keymap();
void __am_timer_rtc(AM_TIMER_RTC_T *);
void __am_timer_uptime(AM_TIMER_UPTIME_T *);
void __am_input_keybrd(AM_INPUT_KEYBRD_T *);
void __am_uart_rx(AM_UART_RX_T *);

static void __am_timer_config(AM_TIMER_CONFIG_T *cfg) { cfg->present = true; cfg->has_rtc = true; }
static void __am_input_config(AM_INPUT_CONFIG_T *cfg) { cfg->present = true;  }
static void __am_uart_config(AM_INPUT_CONFIG_T *cfg) { cfg->present = false;  }
static void __am_gpu_config (AM_GPU_CONFIG_T *cfg) { 
  cfg->present = true;
  cfg->has_accel = false;
  cfg->width = 400;
  cfg->height = 300;
  cfg->vmemsz = 0;  
}
#define FB_ADDR 0x21000000
static void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) { 
  int x = ctl->x;
  int y = ctl->y;
  int w = ctl->w;
  int h = ctl->h;

  if (!ctl->sync && (w == 0 || h == 0)) return;
  uint32_t *pixels = ctl->pixels;

  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;

  uint32_t screen_width = 400;

  for (int j = y; j < y + h; j ++) {
    for (int i = x; i < x + w; i ++) {
      fb[j * screen_width + i] = pixels[(j - y) * w + (i - x)];
    }
  }
}

typedef void (*handler_t)(void *buf);
static void *lut[128] = {
  [AM_TIMER_CONFIG] = __am_timer_config,
  [AM_TIMER_RTC   ] = __am_timer_rtc,
  [AM_TIMER_UPTIME] = __am_timer_uptime,
  [AM_INPUT_CONFIG] = __am_input_config,
  [AM_INPUT_KEYBRD] = __am_input_keybrd,
  [AM_UART_CONFIG]  = __am_uart_config,
  [AM_UART_RX     ] = __am_uart_rx,
  [AM_GPU_CONFIG]   = __am_gpu_config,
  [AM_GPU_FBDRAW]   = __am_gpu_fbdraw,
};

static void fail(void *buf) { panic("access nonexist register"); }

bool ioe_init() {
  for (int i = 0; i < LENGTH(lut); i++)
    if (!lut[i]) lut[i] = fail;
  __am_timer_init();
  init_keymap();
  return true;
}

void ioe_read (int reg, void *buf) { 
  //printf("ioe_read: accessing register %d\n", reg);
  ((handler_t)lut[reg])(buf); 
}
void ioe_write(int reg, void *buf) { 
  //printf("ioe_write: accessing register %d\n", reg);
  ((handler_t)lut[reg])(buf); 
}