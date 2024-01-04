#include<stdio.h>
int main()
{
    // diamond shape--
    int n,s,k;
    scanf("%d",&n);
    s=n-1;
    k=1;
    for(int i=1;i<=2*n-1;i++)
    {
        //ekta line er kaj
        for(int j=0;j<s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("%d",j);
        }
        //line shese changes--
        if(i<=n-1)
        {
            s--;
            k+=2;
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