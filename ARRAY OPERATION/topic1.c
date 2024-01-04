#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n+1];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int pos,value;
    scanf("%d %d",&pos,&value);
    for(i=n;i>=pos+1;i--)
    {
        array[i]=array[i-1];
    }
    array[pos]=value;
    for(i=0;i<n+1;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}