#include <stdio.h>

#define DEBUG

void sort_and_sum(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    #ifdef DEBUG
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    #endif

    int sum = 0;
    
    #ifdef DEBUG
    printf("Elements at indices divisible by 3: ");
    #endif

    for (int i = 0; i < size; i++) {
        if (i % 3 == 0) {
            sum += arr[i];
            #ifdef DEBUG
            printf("%d ", arr[i]);
            #endif
        }
    }

    #ifdef DEBUG
    printf("\n");
    #endif

    printf("Sum of elements at indices divisible by 3: %d\n", sum);
}

int main() {
    int arr[] = {12, 3, 5, 19, 8, 7, 15, 2, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort_and_sum(arr, size);

    return 0;
}