#include <am.h>
#include <nemu.h>
#include <klib-macros.h>

void __am_timer_init();
void __am_gpu_init();
void __am_audio_init();
void __am_input_keybrd(AM_INPUT_KEYBRD_T *);
void __am_timer_rtc(AM_TIMER_RTC_T *);
void __am_timer_uptime(AM_TIMER_UPTIME_T *);
void __am_gpu_config(AM_GPU_CONFIG_T *);
void __am_gpu_status(AM_GPU_STATUS_T *);
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *);
void __am_audio_config(AM_AUDIO_CONFIG_T *);
void __am_audio_ctrl(AM_AUDIO_CTRL_T *);
void __am_audio_status(AM_AUDIO_STATUS_T *);
void __am_audio_play(AM_AUDIO_PLAY_T *);
void __am_disk_config(AM_DISK_CONFIG_T *cfg);
void __am_disk_status(AM_DISK_STATUS_T *stat);
void __am_disk_blkio(AM_DISK_BLKIO_T *io);

static void __am_timer_config(AM_TIMER_CONFIG_T *cfg) { cfg->present = true; cfg->has_rtc = true; }
static void __am_input_config(AM_INPUT_CONFIG_T *cfg) { cfg->present = true;  }
static void __am_uart_config(AM_UART_CONFIG_T *cfg)   { cfg->present = true; }
static void __am_net_config (AM_NET_CONFIG_T *cfg)    { cfg->present = false; }

static int shift_pressed = 0;
static const uint8_t keymap[] = {
  [AM_KEY_ESCAPE] = 27,

  [AM_KEY_GRAVE]  = '`',
  [AM_KEY_1] = '1',
  [AM_KEY_2] = '2',
  [AM_KEY_3] = '3',
  [AM_KEY_4] = '4',
  [AM_KEY_5] = '5',
  [AM_KEY_6] = '6',
  [AM_KEY_7] = '7',
  [AM_KEY_8] = '8',
  [AM_KEY_9] = '9',
  [AM_KEY_0] = '0',
  [AM_KEY_MINUS]  = '-',
  [AM_KEY_EQUALS] = '=',
  [AM_KEY_BACKSPACE] = '\b',

  [AM_KEY_TAB] = '\t',

  [AM_KEY_Q]='q',[AM_KEY_W]='w',[AM_KEY_E]='e',[AM_KEY_R]='r',
  [AM_KEY_T]='t',[AM_KEY_Y]='y',[AM_KEY_U]='u',[AM_KEY_I]='i',
  [AM_KEY_O]='o',[AM_KEY_P]='p',

  [AM_KEY_LEFTBRACKET]='[',
  [AM_KEY_RIGHTBRACKET]=']',
  [AM_KEY_BACKSLASH]='\\',

  [AM_KEY_A]='a',[AM_KEY_S]='s',[AM_KEY_D]='d',[AM_KEY_F]='f',
  [AM_KEY_G]='g',[AM_KEY_H]='h',[AM_KEY_J]='j',[AM_KEY_K]='k',
  [AM_KEY_L]='l',

  [AM_KEY_SEMICOLON]=';',
  [AM_KEY_APOSTROPHE]='\'',
  [AM_KEY_RETURN]='\n',

  [AM_KEY_Z]='z',[AM_KEY_X]='x',[AM_KEY_C]='c',
  [AM_KEY_V]='v',[AM_KEY_B]='b',[AM_KEY_N]='n',
  [AM_KEY_M]='m',

  [AM_KEY_COMMA]=',',
  [AM_KEY_PERIOD]='.',
  [AM_KEY_SLASH]='/',

  [AM_KEY_SPACE]=' ',

  [AM_KEY_DELETE]=127,
};
static void __am_uart_rx(AM_UART_RX_T *rx) {
   AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);

  if (ev.keycode == AM_KEY_NONE) {
    rx->data = 0xff;
    return;
  }

  if (ev.keycode == AM_KEY_LSHIFT ||
      ev.keycode == AM_KEY_RSHIFT) {
    shift_pressed = ev.keydown;
    rx->data = 0xff;
    return;
  }

  if (!ev.keydown) {
    rx->data = 0xff;
    return;
  }

  uint8_t ch = keymap[ev.keycode];
  if (ch == 0) {
    rx->data = 0xff;
    return;
  }

  if (shift_pressed) {

    if (ch >= 'a' && ch <= 'z') {
      ch = ch - 'a' + 'A';
    }
    else {
      switch (ch) {
        case '-': ch = '_'; break;
        case '=': ch = '+'; break;
        case '[': ch = '{'; break;
        case ']': ch = '}'; break;
        case '\\': ch = '|'; break;
        case ';': ch = ':'; break;
        case '\'': ch = '"'; break;
        case ',': ch = '<'; break;
        case '.': ch = '>'; break;
        case '/': ch = '?'; break;
        case '`': ch = '~'; break;

        case '1': ch = '!'; break;
        case '2': ch = '@'; break;
        case '3': ch = '#'; break;
        case '4': ch = '$'; break;
        case '5': ch = '%'; break;
        case '6': ch = '^'; break;
        case '7': ch = '&'; break;
        case '8': ch = '*'; break;
        case '9': ch = '('; break;
        case '0': ch = ')'; break;
      }
    }
  }

  rx->data = ch;
}

typedef void (*handler_t)(void *buf);
static void *lut[128] = {
  [AM_TIMER_CONFIG] = __am_timer_config,
  [AM_TIMER_RTC   ] = __am_timer_rtc,
  [AM_TIMER_UPTIME] = __am_timer_uptime,
  [AM_INPUT_CONFIG] = __am_input_config,
  [AM_INPUT_KEYBRD] = __am_input_keybrd,
  [AM_GPU_CONFIG  ] = __am_gpu_config,
  [AM_GPU_FBDRAW  ] = __am_gpu_fbdraw,
  [AM_GPU_STATUS  ] = __am_gpu_status,
  [AM_UART_CONFIG ] = __am_uart_config,
  [AM_UART_RX     ] = __am_uart_rx,
  [AM_AUDIO_CONFIG] = __am_audio_config,
  [AM_AUDIO_CTRL  ] = __am_audio_ctrl,
  [AM_AUDIO_STATUS] = __am_audio_status,
  [AM_AUDIO_PLAY  ] = __am_audio_play,
  [AM_DISK_CONFIG ] = __am_disk_config,
  [AM_DISK_STATUS ] = __am_disk_status,
  [AM_DISK_BLKIO  ] = __am_disk_blkio,
  [AM_NET_CONFIG  ] = __am_net_config,
};

static void fail(void *buf) { panic("access nonexist register"); }

bool ioe_init() {
  for (int i = 0; i < LENGTH(lut); i++)
    if (!lut[i]) lut[i] = fail;
  __am_gpu_init();
  __am_timer_init();
  __am_audio_init();
  return true;
}

void ioe_read (int reg, void *buf) { ((handler_t)lut[reg])(buf); }
void ioe_write(int reg, void *buf) { ((handler_t)lut[reg])(buf); }
