#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000
//#define KBD_ADDR        (DEVICE_BASE + 0x0000060)

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  kbd->keydown = (inl(KBD_ADDR) & KEYDOWN_MASK) ? true : false;
  kbd->keycode = inl(KBD_ADDR + 4);
}
