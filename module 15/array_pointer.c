//arry and pointer--
#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    printf("oth index er adress:%p\n",&arr[0]);
    printf("oth index er adress:%p\n",arr);
    printf("oth index er value:%d\n",arr[0]);
    printf("3rd index er value:%d\n",*(arr+2));
    // printf("oth index er adress:%p\n",arr);
    return 0;
}