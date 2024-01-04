#include<stdio.h>
int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int i,j,temp;
    for(i=0,j=9;i<10;i++,j--)
    {
        temp=array[j];
        array[j]=array[i];
        array[i]=temp; 
    }
    for(i=9;i>=0;i--)
    {
        if(i==0)
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