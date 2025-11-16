#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  // int i;
  // int w = (inl(VGACTL_ADDR) & 0xffff) ;
  // int h = (inl(VGACTL_ADDR) >> 16) ;
  // uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  // for (i = 0; i < w * h; i ++) fb[i] = i;
  // outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = (inl(VGACTL_ADDR) & 0xffff), .height = inl(VGACTL_ADDR) >> 16,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  uint32_t *pixels = (uint32_t *)ctl->pixels;
  int screen_w = inl(VGACTL_ADDR) & 0xffff;
  // 一行一行地将pixels中的图像数据复制到显存fb的对应位置
  for (int j = 0; j < ctl->h; j++) {
    for (int i = 0; i < ctl->w; i++) {
      fb[(ctl->y + j) * screen_w + (ctl->x + i)] = pixels[j * ctl->w + i];
    }
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
