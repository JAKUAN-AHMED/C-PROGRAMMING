#include<stdio.h>
#include <stdlib.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int flag=1;
    int s;
    scanf("%d",&s);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==s)
            {
                flag=0;
            }
        }
    }
    if(flag==0)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }
    return 0;
}