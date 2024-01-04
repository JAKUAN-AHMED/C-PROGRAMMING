#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j;
    int sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum+=a[i][j];
        }
    }
    
    float avg=(float)sum/9;
    printf("%.2f",avg);
    return 0;
}