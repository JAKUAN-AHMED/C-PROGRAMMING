#include<stdio.h>
#include<string.h>
int main()
{
    //char a[100]/*size*/="programming";//length
    //counting of a charecters

    char a[100];
    // gets(a);
    fgets(a,24,stdin);
    int count=0;
    // for(int i=0;a[i]!='\0';i++)
    // {
    //    count++;
    // }


    // int i=0;
    // while(a[i]!='\0')
    // {
    //   count++;
    //   i++;
    // }
    // printf("%d",count);


    //there is a function to get length of a charecter:strlen()
    int st=strlen(a);
    printf("%d",st);
    return 0;
}