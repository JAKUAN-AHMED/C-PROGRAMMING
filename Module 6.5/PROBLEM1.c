#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<'z')
    {
        ch++;
        printf("%c",ch);
    }
    else if(ch=='z')
    {
        printf("a");
    }
    else if(ch>='A' && ch<'Z')
    {
        ch++;
        printf("%c",ch);
    }
    else
    {
        printf("A");
    }
    return 0;
}