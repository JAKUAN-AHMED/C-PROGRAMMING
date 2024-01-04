#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=INT_MAX;
    int cnt=0;
    int d;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            
            min=arr[i];
            d=min;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==d)
        {
            cnt++;
        }
    }
    if(cnt%2!=0)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }
    
    return 0;
}