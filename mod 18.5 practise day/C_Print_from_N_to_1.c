#include<stdio.h>
void rec(int n,int i)
{
    if(i==0)
    return;
    if(i==1)
    {
        printf("%d",i);
    }
    else
    {
        printf("%d ",i);
    }
    rec(n,i-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    rec(n,n);
    return 0;
}