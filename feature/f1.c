#include<stdio.h>

int main()
{
    int d;
    scanf("%d",&d);
    int k=d-2;
    int s=1;
    int q=d/2;
    int n=0;
    int w=0;
    for(int i=0;i<d;i++)
    {
        if(i<q)
        {
            for(int j=0;j<n;j++)
            {
                printf("*");
            }
            for(int j=0;j<s;j++)
            {
                printf("\\");
            }
            for(int j=0;j<k;j++)
            {
                printf("*");
            }
            for(int j=0;j<s;j++)
            {
                printf("/");
            }
            for(int j=0;j<w;j++)
            {
                printf("*");
            }
            n++;
            k-=2;
            w++;
        }
        else if(i>q)
        {
            n--;
            k+=2;
            w--;
            for(int j=0;j<n;j++)
            {
                printf("*");
            }
            for(int j=0;j<s;j++)
            {
                printf("/");
            }
            for(int j=0;j<k;j++)
            {
                printf("*");
            }
            for(int j=0;j<s;j++)
            {
                printf("\\");
            }
            for(int j=0;j<w;j++)
            {
                printf("*");
            }
        }
        else // i == q
        {
            for(int j=0;j<d;j++)
            {
                if(j == q)
                {
                    printf("X");
                }
                else
                {
                    printf("*");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
