#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    int sum_of_odd=0;
    int sum_of_even=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum_of_even+=a[i];
        }
        if(a[i]%2!=0)
        {
            sum_of_odd+=a[i];
        }
    }
    printf("\n%d",sum_of_even);
    printf("%d",sum_of_odd);
    return 0;
}