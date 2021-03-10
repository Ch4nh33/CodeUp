#include <stdio.h>
int main(void)
{
  int day;
  scanf("%d",&day);
  switch (day)
  {
  case 1:
  case 3:
  case 5:
  case 7:
    printf("oh my god");
    break;
  
  default:
    printf("enjoy");
    break;
  }
  return 0;
}
