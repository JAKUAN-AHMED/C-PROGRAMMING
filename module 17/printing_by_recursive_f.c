//printing 1  to 5 by recursive function
#include<stdio.h>
void fun(int i)
{
    if(i==6) 
    return;
    printf("%d\n",i);
    fun(i+1);
}
int main()
{
    fun(1);
    return 0;
}
//printing 1 to 5 in reverse way
// #include<stdio.h>
// void fun(int i)
// {
//     if(i==0) 
//     return;
//     printf("%d\n",i);
//     fun(i-1);
// }
// int main()
// {
//     fun(5);
//     return 0;
// }