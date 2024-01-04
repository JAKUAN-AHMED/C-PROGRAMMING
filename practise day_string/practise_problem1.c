#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0]; // Initialize max with the first element of the array
    int min = arr[0]; // Initialize min with the first element of the array
    int maxIndex = 0; // Index of the maximum element
    int minIndex = 0; // Index of the minimum element

    // Find the maximum and minimum elements in the array
    for (int i = 0; i < a; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }

    // Swap the maximum and minimum elements in the array
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    // Print the modified array
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
