#include<stdio.h>
void swap_it(int *arr,int size)
{
    int temp;
    temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[2];
    arr[0]=a;
    arr[1]=b;
    swap_it(arr,2);
    return 0;
}