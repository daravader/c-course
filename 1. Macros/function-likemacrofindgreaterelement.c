//Make a function-like macro that uses the ternary comparison operator to find the greater of 2 elements. 
#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x = 10, y = 20;
    printf("Greater of %d and %d is: %d\n", x, y, MAX(x, y));
    return 0;
}
