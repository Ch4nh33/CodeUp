#include <stdio.h>
int main(void)
{
  unsigned int second;
  scanf("%u",&second);
  
  unsigned int minute = second / 60; 
  unsigned int second2 = second % 60;
  printf("%u %u",minute,second2);

  return 0;
}
