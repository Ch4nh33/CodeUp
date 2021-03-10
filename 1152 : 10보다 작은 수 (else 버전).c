#include <stdio.h>
int main(void)
{
  signed int num;
  scanf("%d",&num);
  if(num<10)
    printf("small");
  else
    printf("big");
  return 0;
}
