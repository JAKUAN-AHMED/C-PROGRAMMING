#include<stdio.h>
int main()
{
    int arr[3][3]={10,20,30
    ,40,50,60,
    70,80,90};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}