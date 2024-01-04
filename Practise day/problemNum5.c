#include<stdio.h>
int main()
{
    int number;  
    scanf("%d",&number);
    if(number>=10000)
    {
        printf("Gucci Bag\n");
        if(number>20000)
        {
            printf("Gucci Belt");
        }
    }
    else if(number>=5000)
    {
        printf("Levis Bag");
    }
    else
    {
        printf("something");
    }
    return 0;
}