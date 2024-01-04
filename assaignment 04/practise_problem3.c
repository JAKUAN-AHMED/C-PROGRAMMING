#include<stdio.h>
int count_before_zero(int *arr,int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            break;
        }
        else
        {
            count++;
        }
    }
    return count;
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
    int d=count_before_zero(arr,n);
    printf("%d",d);
    return 0;
}