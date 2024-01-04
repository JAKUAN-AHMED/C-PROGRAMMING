#include<stdio.h>
int main()
{
    
    //pointer er modde je bhabe memory address value hisebe rakha jay
    double x=1.2;
    double *p=&x;
    // p=&x;
    x=2020.1;
    printf("x er memory address:-%p\n",&x);
    printf("x er memory address:-%p\n",p);
    printf("x er memory address:-%p\n",&p);
    printf("x er memory size:-%d\n",sizeof(x));
    printf("p er memory size:-%d\n",sizeof(p));
    printf("x er value:-%.2lf\n",*p);
    return 0;
}