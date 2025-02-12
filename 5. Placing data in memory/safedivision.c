#include "safeint.h"
#include "util.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        print_error("Usage: safedivide <num1> <num2>");
        return 1;
    }

    SafeResult a = safestrtoint(argv[1]);
    SafeResult b = safestrtoint(argv[2]);

    if (a.errorflag || b.errorflag) {
        print_error("arguments exceed allowed range.");
        return 1;
    }

    if (b.value == 0) {
        print_error("division by zero is not possible");
        return 1;
    }

    SafeResult result = safedivide(a.value, b.value);

    if (result.errorflag) {
        print_error("Overflow/Underflow detected");
        return 1;
    }

    printf("the wuotient: %d\n", result.value);
    return 0;
}
