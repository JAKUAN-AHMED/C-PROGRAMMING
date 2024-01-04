// ceil()
// floor()
// round()
// sqrt()
// pow()
// strlen()
// strcmp()
// strcat()
// strupr()
// strlwr()
// strrev()
// printf()
// scanf()
// main()
//abs()

//ceil()--highest value print korbe

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     double x;
//     scanf("%lf",&x);
//     int n=ceil(x);
//     printf("%d",n);
//     return 0;
// }

//floor()--lowest value print korbe

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     double x;
//     scanf("%lf",&x);
//     int n=floor(x);
//     printf("%d",n);
//     return 0;
// }


//round()--nearest value print korbe
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     double x;
//     scanf("%lf",&x);
//     int n=round(x);
//     printf("%d",n);
//     return 0;
// }

//sqrt()--square value print korbe
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     double x;
//     scanf("%lf",&x);
//     float n=sqrt(x);
//     printf("%f",n);
//     return 0;
// }

//pow()-power of an element hisbe kaj kore
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     double x,y;
//     scanf("%lf %lf",&x,&y);
//     int n=pow(x,y);
//     printf("%d",n);
//     return 0;
// }

//abs()--absolute value dibe and aita just int  niya kaj kore
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int x;
    scanf("%d",&x);
    int n=abs(x);
    printf("%d",n);
    return 0;
}