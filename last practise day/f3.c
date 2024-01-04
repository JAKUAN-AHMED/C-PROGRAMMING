#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            k = i - 1;
            for (int j = 0; j <= k; j++)
            {
                int t = a[j];
                a[j] = a[k];
                a[k] = t;
                k--;
            }
           
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}