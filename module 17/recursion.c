void fun()
{
    printf("fun\n");
    fun();
}
#include<stdio.h>
int main()
{
    fun();
    return 0;
}