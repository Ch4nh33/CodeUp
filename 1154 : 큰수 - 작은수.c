#include <stdio.h>
int main(void)
{
  signed int max, min;
  scanf("%d %d",&max,&min);
  if(max>min)
    printf("%d",max-min);
  else if(min>max)
    printf("%d",min-max);
  else
    printf("%d",max-min);
  return 0;
}
