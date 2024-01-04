//has return +parameter

#include<stdio.h>
char value(char y)
{
    scanf("%c",&y);
    return y;
}
int main()
{
    char y;
    char ch=value(y);
    printf("%c",ch);
    return 0;
}

//Has Return + No Parameter
#include<stdio.h>
int area_of_triangle()
{
    int base,height;
    base=10;
    height=20;
    int area=0.5*base*height;
    return area;
}
int main()
{
    int x=area_of_triangle();
    printf("%d",x);
    return 0;
}

//No Return + Parameter
#include<stdio.h>
void hero(int x,int y)
{
    int div=x/y;
    printf("%d",div);
}
int main()
{
    int x=10,y=2;
    hero(x,y);
    return 0;
}

//No Return + No Parameter
#include<stdio.h>
void motu()
{
    int n,s;
    scanf("%d %d",&n,&s);
    if(n>s)
    {
        printf("%d",n);
    }
    else
    {
        printf("%d",s);
    }
}
int main()
{
    motu();
    return 0;
}
