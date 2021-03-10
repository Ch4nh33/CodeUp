#include <stdio.h>
int main(void)
{
  unsigned int height, length;
  scanf("%u %u",&height,&length);
  printf("%.1f",((float)height*(float)length)/2);
  return 0;
}
