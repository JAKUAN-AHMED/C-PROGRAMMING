#include<stdio.h>
int sum(int x,int y)
{
    int s=x+y;
    return s;
}
int main()
{
    int d=sum(15,20);
    printf("%d\n",d);
    return 0;
}