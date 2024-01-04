#include<stdio.h>
#include<stdlib.h>
int my_abs(int x)
{
    int d=abs(x);
    return d;
}
int main()
{
    int x;
    scanf("%d",&x);
    int p=my_abs(x);
    printf("%d",p);
    return 0;
}