#include<stdio.h>
int main()
{
    //data_type name[size]
    // int ar [5];
    // for(int i=0;i<5;i++)
    // {
    //     printf("ar[%d]\n",i);
    // }
    int ar [5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;
}