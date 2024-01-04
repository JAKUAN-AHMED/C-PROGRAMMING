#include<stdio.h>
int main()
{
    int n,p;
    scanf("%d %d",&n,&p);
    float d=1.00*n/100;
    float s=1-d;
    float o=p/s;
    printf("%.2f",o);
    
    return 0;
}