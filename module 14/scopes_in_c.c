// #include<stdio.h>
// void fun(void)
// {
//     int s=100;
//     printf("fun er s er address-%p\n",&s);
// }
// int main()
// {
//     int s=200;
//     printf("Main er s er address-%p\n",&s);
//     fun();
//     return 0;
// }

// global--puro program jhure access kora jabe
#include<stdio.h>
int x=56;
void fun(void)
{
    // int s=100;
    // printf("fun er s er address-%p\n",&s);
    // printf("%d",x);
    // printf("Fun er x er address-%p\n",&x);
}
int main()
{
    //int s=200;
    //printf("Main er s er address-%p\n",&s);
    //printf("Main er x er address-%p\n",&x);
    //printf("%d",x);
    //fun();
    int y=100;
    for(int i=0;i<5;i++)
    {
        printf("%d\n",y);
    }
    return 0;
}