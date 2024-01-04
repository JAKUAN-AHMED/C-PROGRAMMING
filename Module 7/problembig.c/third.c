#include<stdio.h>
int main()
{
    //sum of array
    
    // int a[10]; int sum=0;
    // for(int i=0;i<10;i++)
    // {
    //     scanf("%d",&a[i]);
    // }
    // for(int i=0;i<10;i++)
    // {
    //     sum=sum+a[i];
    //     scanf("%d",a[i]);
    // }
    // printf("%d",sum);

    //number-2
    // int a[]={-99,45,100,37,89,-327,245};
    // int max=a[0];int i;
    // for(i=0;i<7;i++)
    // {
    //     if(a[i]>max)
    //     {
    //         max=a[i];
    //     }   
    // }
    // printf("%d",max);


    // problem number__3
    int a[5],b[5],ab[5];
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
        ab[i]=a[i]+b[i];
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",ab[i]);
    }


    return 0;
}