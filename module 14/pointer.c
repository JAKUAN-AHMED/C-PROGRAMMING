// what is pointer?
// ans is:pointer is a variable
//it works with memory address--

#include<stdio.h>
int main()
{
    int x=10;
    // printf("%p\n",&x);
    int *p=&x;
    // printf("%p\n",p);
    printf("%d\n",*p);
    *p=200;
    printf("%d\n",x);
    return 0;
}

