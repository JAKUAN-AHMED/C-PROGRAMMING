#include <stdio.h>
#include<stdlib.h>

int main() {
    int t; // Number of test cases
    scanf("%d", &t);
    for (int caseNum = 0; caseNum < t; caseNum++)
    {
        int n; // Number of elements in the array
        scanf("%d",&n);
        int arr[n];
        int evenCount = 0;
        int oddCount = 0;
        for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
        if(oddCount==evenCount)
        {
            printf("0\n");
        }
        else if(n%2!=0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n",abs(oddCount-evenCount)/2);
        }
    }


    return 0;
}
