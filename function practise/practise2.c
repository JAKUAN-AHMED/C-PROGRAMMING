#include<stdio.h>
void even_or_odd(int x)
{
    if(x%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
int main()
{
    even_or_odd(10);
    return 0;
}