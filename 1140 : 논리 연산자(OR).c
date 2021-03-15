#include<stdio.h>
int logical(int a, int b)
{
    return a || b;
}
int main(void)
{
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",logical(n,m));
    return 0;
}
