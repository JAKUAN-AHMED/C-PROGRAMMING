#include<stdio.h>
void fun(int x)
{
    for(int i=1;i<=x;i++)
    {
        if(i==x)
        {
            printf("%d",i);
        }
        else
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}