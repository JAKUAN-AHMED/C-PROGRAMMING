#include<stdio.h>
void change_it(int *arr,int size)
{
    arr[size-1]=130;
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
} 
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    change_it(arr,a);
    return 0;
}