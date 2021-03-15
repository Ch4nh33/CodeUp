#include<stdio.h>

int add(int m, int n)
{
    int k = m+n;
    return k;
}

int sub(int m1, int n2)
{
    int c =  m1 - n2;
    return c;
}

int multiple(int m2, int n2)
{
    int a = m2*n2;
    return a;
}

int divide(int m3,int n3)
{
    int j = m3/n3;
    return j;
}

int main(void)
{
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d+%d=%d",n,m,add(n,m));
    printf("\n%d-%d=%d",n,m,sub(n,m));
    printf("\n%d*%d=%d",n,m,multiple(n,m));
    printf("\n%d/%d=%d",n,m,divide(n,m));
    return 0;
}
