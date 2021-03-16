#include<stdio.h>

int main(void)
{
  int ter1,ter2,ter3;
  scanf("%d %d %d",&ter1,&ter2,&ter3);
  if((ter1<=170 || ter2<=170)||ter3<=170)
  {
    printf("CRASH");
  }else
  {
    printf("PASS");
  }
  return 0;
}
