#include<stdio.h>
int main()
{
    int k,n;
    scanf("%d %d",&n,&k);
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    long long int sum=0;
    for(int i=0;i<k;i++)
    {
        // if(sum+arr[i]>sum)
        // {
            sum=sum+arr[i];
        //}
    }
    if(sum<=0)
    {
        printf("0");
    }
    else
    {
        printf("%lld",sum);
    }
    return 0;
}