#include<stdio.h>
#include<string.h>
char is_palindrome()
{
    char arr[101];
    char arr1[101];
    scanf("%s",arr);
    strcpy(arr1,arr);
    strrev(arr);
    int d=strcmp(arr,arr1);
    if(d==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
} 
int main()
{
    is_palindrome();
    return 0;
}