#include <am.h>

#define RTC_ADDR 0xa0000048

void __am_timer_init() {

}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t R1 = *((volatile uint32_t *)RTC_ADDR);
  uint32_t R2 = *((volatile uint32_t *)(RTC_ADDR + 4));
  uptime->us = (uint64_t)R2 << 32 | R1;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  // 获取当前uptime（微秒）
  AM_TIMER_UPTIME_T uptime;
  __am_timer_uptime(&uptime);
  
  // 转换为秒数，加上Unix时间戳起始时间（1970年1月1日）
  uint64_t seconds = uptime.us / 1000000 + 1700000000; // 大约2023年的时间戳
  
  // 简单的时间转换（不考虑闰年等复杂情况）
  rtc->second = seconds % 60;
  rtc->minute = (seconds / 60) % 60;
  rtc->hour   = (seconds / 3600) % 24;
  rtc->day    = (seconds / 86400) % 30 + 1; // 简化为30天一个月
  rtc->month  = ((seconds / 86400) / 30) % 12 + 1;
  rtc->year   = 2023 + ((seconds / 86400) / 365); // 简化计算
}
