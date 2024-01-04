#include<stdio.h>
#include<string.h>
int main()
{
    char a[20]="Bangladesh";
    char b[20]="Dhaka";
    strcat(a,b);
    printf("%s",a);
    return 0;
}