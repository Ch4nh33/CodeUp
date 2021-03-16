#include<stdio.h>
int even_num(int a, int b)
{
   if((a%2)==0)
  {
    if((b%2)==0)
    {
      printf("짝수+짝수=짝수");
    }
  }
}
int odd_num(int a, int b)
{
   if((a%2)!=0)
  {
    if((b%2)!=0)
    {
      printf("홀수+홀수=짝수");
    }
  }
}

int first_even(int a, int b)
{
   if((a%2)==0)
  {
    if((b%2)!=0)
    {
      printf("짝수+홀수=홀수");
    }
  }
}

int second_even(int a, int b)
{
   if((a%2)!=0)
  {
    if((b%2)==0)
    {
      printf("홀수+짝수=홀수");
    }
  }
}

int main(void)
{
  int num1, num2;
  scanf("%d %d",&num1,&num2);
  even_num(num1,num2);
  odd_num(num1,num2);
  second_even(num1,num2);
  first_even(num1,num2);
  return 0;
}
