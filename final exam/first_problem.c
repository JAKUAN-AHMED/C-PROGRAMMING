#include<stdio.h>
int main()
{
    //sorted ascending order mean--chuto the boro
    //sorted descending order mean--boro the chuto
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //assending order--
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
if(n%2==0)
{
    int d=(n+1)/2-1;
    int d1=(n+3)/2-1;
    printf("%d %d",arr[d],arr[d1]);
}
else
{
    int d=(n/2);
    printf("%d",arr[d]);
}
    return 0;
}