#include<stdio.h>
void fun(int *arr,int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int  arr[3];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    int arr2[3];
    arr2[0]=a;
    arr2[1]=b;
    arr2[2]=c;
    fun(arr,3);
    for(int i=0;i<3;i++)
    {
        printf("%d\n",arr2[i]);
    }
    return 0;
}