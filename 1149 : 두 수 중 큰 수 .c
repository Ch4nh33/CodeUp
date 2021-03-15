#include<stdio.h>
int main(void)
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(n>m)
        printf("%d",n);
    if(m>n)
        printf("%d",m);
    return 0;
}
