//function with string--
//there is no return--

#include<stdio.h>
#include<string.h>
void fun(char *arr)
{
    printf("%s",arr);
}   
int main()
{
    char arr[6]="hello";
    fun(arr);
    return 0;
}