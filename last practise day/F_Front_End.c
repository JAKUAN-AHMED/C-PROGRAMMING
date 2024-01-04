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
    int d=sizeof(arr);
    for(int i=0,int j<arr[a]-1;i<d;j--,i++)
    {
        printf("%d %d",arr[i],arr[j]);
    }
    return 0;
}