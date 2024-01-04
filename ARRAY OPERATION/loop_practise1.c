#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int i=num;i>=-35;i--)
    {
        if(num==-1)
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