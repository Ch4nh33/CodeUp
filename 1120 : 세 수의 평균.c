#include <stdio.h>
int main(void)
{
  signed int num1,num2,num3;
  scanf("%d %d %d",&num1,&num2,&num3);
  signed int average = num1+num2+num3;
  printf("%.2f",(float)average/3);
  return 0;
}
