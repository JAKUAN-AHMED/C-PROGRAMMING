#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ans,an=2;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            ans=a[i]/a[i];
            printf("%d",ans);
        }
        else
        {
            if(a[i]<0)
            {
                a[i]=an;
                printf("%d",a[i]);
            }
            else{
                printf("0");
            }
        }
         if (i != n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}