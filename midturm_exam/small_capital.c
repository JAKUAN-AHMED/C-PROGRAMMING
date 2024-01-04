#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1001];
    scanf("%s",ch);
    int size=strlen(ch);
    int small=0;int capital=0;
    for(int i=0;i<size;i++)
    {
        if(ch[i]>=97 && ch[i]<=122)
        {
            small++;
        }
        else
        {
            capital++;
        }
    }
    printf("%d %d",capital,small);
    return 0;
}