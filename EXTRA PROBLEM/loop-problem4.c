#include<stdio.h>
int main()
{
    int i;
    for(i=4;i>=1;i--)//for  the column
    {
        for(int j=1;j<=i;j++)//for the row
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    return 0;
}