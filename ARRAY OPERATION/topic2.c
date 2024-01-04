#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int pos;
    scanf("%d",&pos);
    for(i=pos;i<n-1;i++)
    {
        array[i]=array[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}