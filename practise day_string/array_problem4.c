#include <stdio.h>

int main() {
    int a[10];
    int sum=0;
    for(int i=1;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=10;i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}
