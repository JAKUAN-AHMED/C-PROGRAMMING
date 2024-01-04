#include <stdio.h>
#include <limits.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int groupCount = n / k;
    int remainingElements = n % k;

    for (int i = 0; i < groupCount; i++) {
        int min = INT_MAX;
        for (int j = i * k; j < (i + 1) * k; j++) {
            if (arr[j] < min) {
                min = arr[j];
            }
        }
        printf("%d ", min);
    }

    if (remainingElements > 0) {
        int min = INT_MAX;
        for (int j = groupCount * k; j < n; j++) {
            if (arr[j] < min) {
                min = arr[j];
            }
        }
        printf("%d ", min);
    }

    return 0;
}
