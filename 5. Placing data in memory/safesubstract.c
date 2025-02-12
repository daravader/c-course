#include "safeint.h"
#include "util.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        print_error("usage safesubtract <num1> <num2>");
        return 1;
    }

    SafeResult a = safestrtoint(argv[1]);
    SafeResult b = safestrtoint(argv[2]);

    if (a.errorflag || b.errorflag) {
        print_error("arguments exceed allowed range.");
        return 1;
    }

    SafeResult result = safesubtract(a.value, b.value);

    if (result.errorflag) {
        print_error("over or underflow detected during subtraction");
        return 1;
    }

    printf("the difference: %d\n", result.value);
    return 0;
}
