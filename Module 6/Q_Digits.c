#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        int number;
        scanf("%d",&number);
        do
        {
            printf("%d ",number%10);
            number=number/10;
        }
        while(number!=0);
        printf("\n");

        }
    return 0;
}