#include<stdio.h>
int main()
{
    int i;
    int sum=0;
    for(int i=101;i>0;i-=2)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}