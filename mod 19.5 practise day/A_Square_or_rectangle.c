#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int s,p;
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&s,&p);
        if(s==p)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }

    return 0;
}