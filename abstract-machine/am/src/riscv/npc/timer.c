#include <am.h>

#define RTC_ADDR 0xa0000048

void __am_timer_init() {
  
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t low = *((volatile uint32_t *)RTC_ADDR);
  uint32_t high = *((volatile uint32_t *)(RTC_ADDR + 4));
  uptime->us = (((uint64_t)high << 32) | low) ;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = *((volatile uint32_t *)(RTC_ADDR + 8));
  rtc->minute = *((volatile uint32_t *)(RTC_ADDR + 12));
  rtc->hour = *((volatile uint32_t *)(RTC_ADDR + 16));
  rtc->day = *((volatile uint32_t *)(RTC_ADDR + 20));
  rtc->month = *((volatile uint32_t *)(RTC_ADDR + 24));
  rtc->year = *((volatile uint32_t *)(RTC_ADDR + 28));
}
