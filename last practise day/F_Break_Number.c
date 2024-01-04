#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);

    long long int numbers[N];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &numbers[i]);
    }

    int even=0;
    int odd=0;
    for (int i = 0; i < N; i++)
    {
        if(numbers[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(odd==even)
    {
        printf("0");
    }
    else if(even>odd)
    {
        even=even-odd;
        printf("%d",even);
    }
    else
    {
        odd=odd-even;
        printf("%d",odd);
    }

    return 0;
}
