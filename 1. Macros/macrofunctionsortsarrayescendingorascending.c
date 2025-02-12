#include <stdio.h>

#define SWAP(A, B, TYPE) { TYPE temp = A; A = B; B = temp; }

#define SORT(ARRAY, SIZE, TYPE, COMPARE) \
    for (size_t i = 0; i < SIZE - 1; ++i) { \
        for (size_t j = 0; j < SIZE - i - 1; ++j) { \
            if (COMPARE(ARRAY[j], ARRAY[j + 1])) { \
                SWAP(ARRAY[j], ARRAY[j + 1], TYPE); \
            } \
        } \
    }

#define GREATER(A, B) ((A) > (B))
#define LESS(A, B) ((A) < (B))

void internal_quit_command(void) { printf("Executing internal quit command\n"); }
void external_start_command(void) { printf("Executing external start command\n"); }

int main() {
    internal_quit_command();
    external_start_command();
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    SWAP(x, y, int);
    printf("After swap: x = %d, y = %d\n", x, y);

    int array[] = {3, 1, 4, 1, 5};
    size_t size = sizeof(array) / sizeof(array[0]);
    printf("Before sort: ");
    for (size_t i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    SORT(array, size, int, GREATER);
    printf("After sort (descending): ");
    for (size_t i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    SORT(array, size, int, LESS);
    printf("After sort (ascending): ");
    for (size_t i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
