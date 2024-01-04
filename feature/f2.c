#include<stdio.h>
#include<limits.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[k];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
       
    }
    int min=INT_MAX;
    for(int i=0;i<n;i+=k)
    {
        min=INT_MAX;
        for(int j=i;j<i+k && j<n;j++)
        {
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }
        printf("%d ",min);
    }
    return 0;
}