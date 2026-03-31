#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000
// KBD_ADDR        (DEVICE_BASE + 0x0000060)

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t key_data = inl(KBD_ADDR);
  kbd->keydown = (key_data & KEYDOWN_MASK) ? true : false;
  kbd->keycode = key_data & ~KEYDOWN_MASK;
}
