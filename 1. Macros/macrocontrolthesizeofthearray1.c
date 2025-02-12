#include <stdio.h>

#define DEFINE_ARRAY_AND_PRINT \
    int myArray[7]; \
    void print_myArray(void) { \
        for (int i = 0; i < 7; ++i) { \
            printf("%d ", myArray[i]); \
        } \
        printf("\n"); \
    }

int main() {
    DEFINE_ARRAY_AND_PRINT

    for (int i = 0; i < 7; ++i) {
        myArray[i] = i;
    }

    print_myArray();

    return 0;
}
