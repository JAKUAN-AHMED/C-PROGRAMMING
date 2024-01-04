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
    //printing row--
    // for(int i=0;i<3;i++)
    // {
    //    printf("%d ",arr[2][i]);
    // }

    //printing column--
    for(int i=0;i<5;i++)
    {
       printf("%d\n",arr[i][0]);
    }
    return 0;
}