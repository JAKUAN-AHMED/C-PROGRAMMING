#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if(number==0)
    {
        printf("zero");
    }
    else if(number%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}