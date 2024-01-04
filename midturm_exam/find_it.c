#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int d;
    scanf("%d",&d);
    int count=0;
    for(int i=0;i<a;i++)
    {
        if(arr[i]==d)
        {
            count++;

        }
    }
    printf("%d",count);
    return 0;
}