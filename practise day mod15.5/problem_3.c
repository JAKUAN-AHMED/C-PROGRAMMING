#include<stdio.h>
#include<limits.h>
void fun(int *arr,int size)
{
     int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d %d",min,max);
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
    fun(arr,n);
    return 0;
}