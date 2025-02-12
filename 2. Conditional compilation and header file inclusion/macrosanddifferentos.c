#include <stdio.h>
#include <string.h>

void simple_sort(int arr[], int n, char method) {
    switch (method) {
        case 'b': // Bubble sort
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            break;
        case 's': // Selection sort
            for (int i = 0; i < n - 1; i++) {
                int min_idx = i;
                for (int j = i + 1; j < n; j++) {
                    if (arr[j] < arr[min_idx]) {
                        min_idx = j;
                    }
                }
                int temp = arr[min_idx];
                arr[min_idx] = arr[i];
                arr[i] = temp;
            }
            break;
        case 'i': // Insertion sort
            for (int i = 1; i < n; i++) {
                int key = arr[i];
                int j = i - 1;
                while (j >= 0 && arr[j] > key) {
                    arr[j + 1] = arr[j];
                    j--;
                }
                arr[j + 1] = key;
            }
            break;
        case 'r': // Reverse array
            for (int i = 0; i < n / 2; i++) {
                int temp = arr[i];
                arr[i] = arr[n - i - 1];
                arr[n - i - 1] = temp;
            }
            break;
    }
}

void sort_based_on_os(int arr[], int n) {
    #ifdef _WIN32
        simple_sort(arr, n, 'b');
    #elif __linux__
        simple_sort(arr, n, 's');
    #elif __APPLE__
        simple_sort(arr, n, 'i');
    #else
        simple_sort(arr, n, 'r');
    #endif
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort_based_on_os(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
