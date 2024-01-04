#include<stdio.h>
int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int array2[10];
    int j;
    for(int i=0, j=9; i<10;i++,j--)
    {
        array2[j]=array[i];
    }
    for(int i=0;i<10;i++)
    {
        array[i]=array2[i];
    }
    for(int i=0;i<10;i++)
    {
        if(i==9)
        {
        printf("%d",array[i]);
        }
        else
        {
            printf("%d\n",array[i]);
        }    

    }

    return 0;
}