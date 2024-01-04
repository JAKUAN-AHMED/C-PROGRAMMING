#include<stdio.h>
int main()
{
    // int numbers[5]={10,20,30,40,50};
    // printf("first element of numbers: %d\n",numbers[0]);
    // printf("third element of numbers: %d\n",numbers[2]);

    // int numbers[5]={6,7,4,6,9};
    // printf("%d\n",numbers[-1]);
    // printf("%d\n",numbers[5]);
    // printf("%d\n",numbers[100]);
    int numbers[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=9;i>=0;i--)
    {
        printf("%d\n",numbers[i]);
    }
    return 0;
}