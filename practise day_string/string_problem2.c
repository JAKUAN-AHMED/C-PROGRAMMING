#include<stdio.h>
int main()
{
    char a[15];
    scanf("%s",a);
    // int sz=sizeof(a)/sizeof(char);
    int count=0;
    int i=0;
    while(a[i]!='\0')
    {
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}