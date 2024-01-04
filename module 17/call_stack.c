#include<stdio.h>
void world()
{
    printf("world start\n");
    printf("world\n");
    printf("world end\n");
}
void hello()
{
    printf("hello start\n");
    printf("hello\n");
    world();
    printf("hello end\n");
}
int main()
{
    printf("main start\n");
    hello();
    printf("main end\n");
    return 0;
}