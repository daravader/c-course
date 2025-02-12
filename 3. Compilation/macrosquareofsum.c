#include <stdio.h>
#define SQUARESUM(A, B) (((A) + (B)) * ((A) + (B)))

int main() {
    int a = 2, b = 3;
    int result = SQUARESUM(a, b);
    printf("The result of (%d + %d) ^ 2 is: %d \n", a, b, result);
    return 0;
}
