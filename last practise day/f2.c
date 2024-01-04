#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    for (long long int  i = 0; i < n; i++)
    {
        long long int a, b;
        scanf("%lld %lld", &a, &b);
        long long int sum;
        if(a<b)
        {
            int d=(b-a)+1;
            sum = d/2*(2*a+(d-1)*1);
        }
        else if (a>b)
        {
            int d=(a-b)+1;
            sum = d/2*(2*b+(d-1)*1);
        }
        
        printf("%lld\n",sum);
    }
    return 0;
}
