#include<stdio.h>
int main()
{
    long long int eye,mouth,body;
    scanf("%lld %lld %lld",&eye,&mouth,&body);
    long long int min;
    if(eye<mouth && eye<body)
    {
        min=eye;
    }
    long long int ans;
    if(eye<body)
    {
        ans=eye;
        ans+=min;
    }
    long long int reward;
    if(eye>body)
    {
        reward=body;
        reward+=ans;
    }
    printf("%lld",min);
    return 0;
}