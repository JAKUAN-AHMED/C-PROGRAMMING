#include<stdio.h>
int main()
{
    int a[5];
    int sum=0;
    int count=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",& a[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]>100)
        {
            sum+=a[i];
            count++;
        }
    }
    if(count>0)
    {
       float avg=(float)sum/count;
       printf("%0.2f",avg);
    }
    return 0;
}