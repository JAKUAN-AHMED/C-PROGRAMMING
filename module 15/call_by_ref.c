
//call by ref--

#include<stdio.h>
void fun(int *p)
{
    printf("fun er x er value:%d\n",*p);
    *p=200;
}
int main()
{
    int x=10;
    printf("main er x er address:%p\n",&x);
    fun(&x);
    printf("fun er x er value:%d\n",x);
    return 0;
}