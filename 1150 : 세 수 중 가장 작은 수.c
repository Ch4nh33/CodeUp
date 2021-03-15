#include<stdio.h>
int main(void)
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    
    if(n>m && n>k)// n is max
    {
        if(m>k)
            printf("%d",k);
        if(m<k)
            printf("%d",m);
        if(m==k)
            printf("%d",k);
    }
    
    if(m>=n && m>=k)// m is max
    {
        if(n>k)
            printf("%d",k);
        if(n<k)
            printf("%d",n);
        if(n==k)
            printf("%d",k);
    }
    
    if(k>m && k>n)// kl is max
    {
        if(n>m)
            printf("%d",m);
        if(n<m)
            printf("%d",n);
        if(n==m)
            printf("%d",m);
    }
    return 0;
}
