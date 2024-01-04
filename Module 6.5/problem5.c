#include<stdio.h>
int main()
{
    int digit;
    scanf("%d",&digit);
    if(digit>=10 || digit<=99)
    {
        int first_digit=digit%10;
        int second_digit=digit/10;
        if(first_digit%second_digit==0 || second_digit%first_digit==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }   
    }
    return 0;
}