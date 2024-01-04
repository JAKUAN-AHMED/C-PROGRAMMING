#include<stdio.h>
int fun(int *arr,int size,int i)
{
    if(i==size-1)
    return 0;
    int max=0;
    int l=fun(arr,size,i+1);
    if(arr[i]<max)
    {
        max=arr[i];
    }
    return max;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=fun(arr,n,0);
    printf("%d",max);
    return 0;
}