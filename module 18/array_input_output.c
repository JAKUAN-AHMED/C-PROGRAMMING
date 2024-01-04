#include<stdio.h>
int main()
{
    int arr[5][3];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
           scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}