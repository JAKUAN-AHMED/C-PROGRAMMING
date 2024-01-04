#include<stdio.h>
int main()
{
    int first;
    scanf("%d",&first);
    int array[first];
    for(int i=0;i<first;i++)
    {
        scanf("%d",&array[i]);
    }
    int second;
    scanf("%d",&second);
    int array2[second];
    for(int i=0;i<second;i++)
    {
        scanf("%d",&array2[i]);
    }
    int array3[first+second];
    for(int i=0;i<first;i++)
    {
        array3[i]=array[i];
    }
    int i=first;
    for(int j=0;j<second;j++)
    {
        array3[i]=array2[j];
        i++;
    }
    for(int i=0;i<first+second;i++)
    {
        printf("%d ",array3[i]);
    }
    return 0;
}