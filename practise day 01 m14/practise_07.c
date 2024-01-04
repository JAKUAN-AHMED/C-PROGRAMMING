#include<stdio.h>
char char_to_ascii()
{
    char ch;
    scanf("%c",&ch);
    return ch;
}
int main()
{
    int d=char_to_ascii();
    printf("%d",d);
    return 0;
}