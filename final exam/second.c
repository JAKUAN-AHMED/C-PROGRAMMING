#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=1;j<=t;j++)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int s;
        scanf("%d",&s);
        int flag=0;
        int index;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]==s)
            {
                flag=1;
                index=i;
                break;
            }
        }
        if(flag==0)
        {
            printf("Case %d: Not Found\n",j);
        }
        else
        {
            printf("Case %d: %d\n",j,index);
        }
    }
    return 0;
}