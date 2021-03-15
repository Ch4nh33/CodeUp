#include<stdio.h>
int bit_shift(int a, int b)
{
    return a & b;
}
int main(void)
{
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",bit_shift(n,m));
    return 0;
}
