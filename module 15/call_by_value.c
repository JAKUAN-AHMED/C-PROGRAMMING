//call by value--

#include<stdio.h>
void fun(int x)
{
    // printf("fun er x er memory address:%p",&x);
    x=200;
}
int main()
{
    int x=10;
    printf("maine er x er memory address:%p\n",&x);
    fun(x);
    printf("main er x er value:%d\n",x);
    return 0;
}