#include<stdio.h>
#include<string.h>
int main()
{
    // char a[18];
    // gets(a);//(size)no matter how you gave, matter is should be bigger or equal
    // printf("%s",a);
    
   //the fgets() should be less then or equal to the array size
   //otherwise it will give segment fault
    char a[18];
    fgets(a,19,stdin);//about size,no matter how you array size ,matter is what size you want to print using fgets()
    a[17]='\0';
    printf("%s",a);
    return 0;
}