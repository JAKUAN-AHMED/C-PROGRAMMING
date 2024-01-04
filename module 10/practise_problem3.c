#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000001];
    scanf("%s",&a);
    int sum=0;
    int i;
    for(i=0;i<strlen(a);i++)
    {
        sum+=(a[i]-48);
    }
    printf("%d",sum);
    return 0;
}