#include<stdio.h>
int main()
{
    int a[7]={-99,45,100,37,89,-327,245};
    int max=0;
    for(int i=0;i<7;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            printf("%d\n",max);
        }
    }
    // printf("%d",max);
    return 0;
}