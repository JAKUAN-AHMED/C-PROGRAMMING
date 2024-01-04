#include<stdio.h>
int main()
{
    long long int eye,mouth,body;
    scanf("%lld %lld %lld",&eye,&mouth,&body);
    long long int div=eye/2;
    long long int body_=body-div;
    long long int eye_=eye-body;
    long long int eye1=eye-mouth;
    long  long int body1=body-mouth;
    long long int result=eye1/2;
    if(mouth==0 && div<body_)
    {
        printf("%lld",div);
    }
    else if(mouth==0 && div>body)
    {
        printf("%lld",body);
    }
    else if(eye<mouth && eye<body)
    {
        printf("%lld",eye);
    }
    else if(eye>mouth && mouth<body && result<body1)
    {
        long long int ans=result+mouth;
        printf("%lld",ans);
    }
    else if(body<mouth && eye>body)
    {
        printf("%lld",body);
    }
    else
    {
        printf("0");
    }
    return 0;
}