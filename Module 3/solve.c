#include <stdio.h>

int main()
{
    int i,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i>1000)
        {
            break;
        }
        if(i%5==0)
        {
            printf("%d Yes\n",i);
        }
        else
        {
             printf("%d No\n",i);
        }
    }
    return 0;
} 