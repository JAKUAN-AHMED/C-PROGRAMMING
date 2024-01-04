#include<stdio.h>
int main()
{
    // char a[7]={'j','a','k','u','a','n'};//no guarantee
    char a[7]="Jakuan";//guranted
    // for(int i=0;i<=5;i++)
    // {
    //     printf("%c ",a[i]);
    // }
    // int sz=sizeof(a)/sizeof(char);
    // printf("%d\n",sz);
    printf("%s",a);
    return 0;
}