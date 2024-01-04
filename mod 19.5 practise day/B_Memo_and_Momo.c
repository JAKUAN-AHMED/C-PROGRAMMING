#include<stdio.h>
int main()
{
    long long int n,d,p;
    scanf("%lld %lld %lld",&n,&d,&p);
    if(n%p==0 && d%p==0)
    {
        printf("Both");
    }
    else if(n%p==0)
    {
        printf("Memo");
    }
    else if(d%p==0)
    {
        printf("Momo");
    }
    else
    {
        printf("No One");
    }
    return 0;
}