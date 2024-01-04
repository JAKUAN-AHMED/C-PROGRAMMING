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
    int num;
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            printf("%d",i);
            break;
        }
        else
        {
            printf("1");
            break;
        }
    }
    
    return 0;
}