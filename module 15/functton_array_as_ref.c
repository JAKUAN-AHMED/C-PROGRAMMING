#include<stdio.h>
void fun(int *arr,int size)
{
    *arr=300;
}
int main()
{
    int arr[5]={10,20,30,40,50};
    fun(arr,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}