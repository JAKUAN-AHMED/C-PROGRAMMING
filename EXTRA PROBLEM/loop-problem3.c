#include<stdio.h>
int main()
{
    int i;
    int k;
    for(i=1;i<=7;i++)
    {
        for(k=1;k<=i;k++)
        {
            if(i%2==0)
            {
                printf("blank line");
                break;
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}