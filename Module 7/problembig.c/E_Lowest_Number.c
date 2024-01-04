#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    int min=INT_MAX;
    scanf("%d",&n);
    int A[n];int pos;
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d ",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        if(A[i]<min)
        {
            min=A[i];
            pos=i+1;
        }
    }
    printf("%d %d",min,pos);   
    return 0;
}