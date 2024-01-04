#include<stdio.h>
int sum_of_two(int x,int y)
{
    int sum=x+y;
    return sum;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    // int d=sum_of_two(x,y);
    printf("%d",sum_of_two(x,y));
    return 0;
}