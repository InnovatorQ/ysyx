extern char data_start [];
extern char data_size [];
extern char data_load_start [];

extern char rodata_start [];
extern char rodata_size [];
extern char rodata_load_start [];

extern char text_start [];
extern char text_size [];
extern char text_load_start [];

extern char text_start [];
extern char text_size [];
extern char text_load_start [];

extern char ssbl_start [];
extern char ssbl_size [];
extern char ssbl_load_start [];

__attribute__((section("fsbl")))
void _fsbl(){
  char *src, *dst;
  long size;

  if (ssbl_start != ssbl_load_start) {
    src = ssbl_load_start;
    dst = ssbl_start;
    size = (long)ssbl_size;
    while (size-- > 0) *dst++ = *src++;
  }
}

__attribute__((section(".ssbl")))
void _ssbl(void)
{
  char *src, *dst;
  long size;
  
  if (text_start != text_load_start) {
    src = text_load_start;
    dst = text_start;
    size = (long)text_size;
    while (size-- > 0) *dst++ = *src++;
  }
  
  if (data_start != data_load_start) {
    src = data_load_start;
    dst = data_start;
    size = (long)data_size;
    while (size-- > 0) *dst++ = *src++;
  }
  
  if (rodata_start != rodata_load_start) {
    src = rodata_load_start;
    dst = rodata_start;
    size = (long)rodata_size;
    while (size-- > 0) *dst++ = *src++;
  }

}
