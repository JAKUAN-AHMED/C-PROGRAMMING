#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=1;i<=100;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=n;i>0;i--)
    {
        
        printf("%d ",a[i]);
        
    }
    int ab,ac;
    scanf("%d%d",&ab,&ac);
    printf("%d %d",ab,ac);
    return 0;
}