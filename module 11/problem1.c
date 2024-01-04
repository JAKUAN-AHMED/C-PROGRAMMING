#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    scanf("%d",&a);
    char str[101];
    for(int i=0;i<a;i++)
    {
        scanf("%s",str);
        int sz=strlen(str);
        if(sz<=10)
        {
            printf("%s\n",str);
        }
        else
        {
            printf("%c%d%c\n",str[0],sz-2,str[sz-1]);
        }
    }
    return 0;
}