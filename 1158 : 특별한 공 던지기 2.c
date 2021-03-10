#include <stdio.h>
int main(void)
{
  signed int width;
  scanf("%d",&width);

  if((30<=width && width<=40)||(70>=width && width>=60))
    printf("win");
  else
    printf("lose");
  return 0;
}
