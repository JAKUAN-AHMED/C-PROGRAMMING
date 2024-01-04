#include<stdio.h>
int main()
{
    // diamond shape--
    int n,s,k;
    scanf("%d",&n);
    s=n-1;
    k=1;
    for(int i=1;i<=2*n;i++)
    {
        //ekta line
        for(int j=0;j<s;j++)
        {
            printf(" ");
        }
        for(int j=0;j<k;j++)
        {
            printf("*");
        }
        //line shese changes--
        if(i<=n-1)
        {
            s--;
            k+=2;
        }
        else if(i==n)
        {
            s;
            k;
        }
        else
        {
            s++;
            k-=2;
        }
        printf("\n");
    }

    return 0;
}