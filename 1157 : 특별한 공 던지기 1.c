#include <stdio.h>
int main(void)
{
  float ball;
  scanf("%f",&ball);
  if((ball>=50)&&(ball<=60))
    printf("win");
  else
    printf("lose");
  return 0;
}
