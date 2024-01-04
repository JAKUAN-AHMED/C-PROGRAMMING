#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char str[101];
    for(int i=0;i<t;i++)
    {
        scanf("%s",str);
        int len=strlen(str);
        if(len<=10)
        {
            printf("%s\n",str);
        }
        else
        {
            printf("%c%d%c\n",str[0],len-2,str[len-1]);
        }
    }
    return 0;
}