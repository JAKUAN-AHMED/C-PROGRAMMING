#include<stdio.h>
#include<string.h>
int main()
{
    char S[1001],T[1001];
    scanf("%s\n%s",&S,&T);
    int sz1=strlen(S);
    int sz2=strlen(T);
    printf("%d %d\n",sz1,sz2);
    printf("%s %s",S,T);
    return 0;
}