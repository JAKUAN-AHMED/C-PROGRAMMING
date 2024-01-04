#include <stdio.h>

int main()
{
    int Num1, Num2;
    scanf("%d%d", &Num1, &Num2);
    printf("%d+%d=%d\n", Num1, Num2, Num1 + Num2);
    printf("%d-%d=%d\n", Num1, Num2, Num1 - Num2);
    printf("%d*%d=%d\n", Num1, Num2, Num1 * Num2);
    printf("%d/%d=%.1f\n",Num1,Num2,(float)Num1/Num2);
    return 0;
}
