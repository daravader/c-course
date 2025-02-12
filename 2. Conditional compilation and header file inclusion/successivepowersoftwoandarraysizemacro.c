#include <stdio.h>
#include <math.h>

#define ARRAY_SIZE 5

int main() {
    #if defined(ARRAY_SIZE) && (ARRAY_SIZE > 0) && (ARRAY_SIZE < 11)
        int array[ARRAY_SIZE];

        for (int i = 0; i < ARRAY_SIZE; i++) {
            array[i] = (int)pow(2.0, i);
        }

        for (int i = 0; i < ARRAY_SIZE; i++) {
            printf("%d\n", array[i]);
        }
    #else
        printf("No array size is entered that is supported by the application.\n");
    #endif

    return 0;
}