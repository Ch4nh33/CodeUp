#include <stdio.h>
int main(void)
{
  signed int seven;
  scanf("%d",&seven);
  if(seven%7==0)
    printf("multiple");
  else
    printf("not multiple");
  return 0;
}
