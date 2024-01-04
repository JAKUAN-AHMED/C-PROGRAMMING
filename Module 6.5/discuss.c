#include<stdio.h>
int main()
{
    long long int eye,mouth,body,count = 0;
    scanf("%lld %lld %lld",&eye,&mouth,&body);
    if (eye == 0 || body == 0)
    {
        printf("%lld",count);
        return 0;
    }
    if (mouth == 0)
    {
       printf("%lld",(eye/2)<body?(eye/2):body);
       return 0;
    }
 
    if (eye<body && eye< mouth)
    {
        // count = count + eye;
        // body = body - eye;
        // mouth = mouth -eye;
        count = eye;
        printf("%lld",count);
        return 0;
    }
    else if (mouth<eye && mouth<body)
    {
       count = count+mouth;
       eye = eye - mouth;
       body = body - mouth;
       count = count + ((eye/2)<body?(eye/2):body);
       printf("%lld",count);
       return 0;
    }
    else if (body<eye && body<mouth)
    {
         count = count+body;
         eye = eye - body;
         mouth = mouth -body;
         printf("%lld",count);
         return 0;
    }
    
    return 0;
}