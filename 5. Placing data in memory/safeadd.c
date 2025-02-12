#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"
#include "util.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        print_error("usage:safeadd <num1> <num2>");
        return 1;
    }

    SafeResult a = safestrtoint(argv[1]);
    SafeResult b = safestrtoint(argv[2]);

    if (a.errorflag || b.errorflag) {
        print_error("arguments exceed allowed range");
        return 1;
    }

    SafeResult result = safadd(a.value, b.value);

    if (result.errorflag) {
        print_error("Overflow/Underflow detected during addition");
        return 1;
    }

    printf("Sum: %d\n", result.value);
    return 0;
}
