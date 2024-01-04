#include<stdio.h>
#include <stdlib.h>
int main()
{
    int row;
    scanf("%d",&row);
    int arr[row][row];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(i==j)
            {
                sum+=arr[i][j];
            }
        }
    }
    int sum1=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(i+j==row-1)
            {
                sum1+=arr[i][j];
            }
        }
    }
    int additon=sum-sum1;
    int open=abs(additon);
    printf("%d",open);
    return 0;
}