#include<stdio.h>
int main()
{
    int i;
    for(i=10;i<20;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        else if(i>16)
        {
            break;
        }
        else
        {
            printf("%d\n",i);
        }
    }
    return 0;
}