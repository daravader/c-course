#include "safeint.h"
#include <stdlib.h>
#include <limits.h>

SafeResult safadd(int a, int b) {
    SafeResult result = {(int)((long long)a + b), 0};
    if ((long long)a + b > INT_MAX || (long long)a + b < INT_MIN) result.errorflag = 1;
    return result;
}

SafeResult safesubtract(int a, int b) {
    SafeResult result = {(int)((long long)a - b), 0};
    if ((long long)a - b > INT_MAX || (long long)a - b < INT_MIN) result.errorflag = 1;
    return result;
}

SafeResult safemultiply(int a, int b) {
    SafeResult result = {(int)((long long)a * b), 0};
    if ((long long)a * b > INT_MAX || (long long)a * b < INT_MIN) result.errorflag = 1;
    return result;
}

SafeResult safedivide(int a, int b) {
    SafeResult result = {b ? a / b : 0, b ? 0 : 1};
    return result;
}

SafeResult safestrtoint(const char *str) {
    char *endptr;
    long temp = strtol(str, &endptr, 10);
    SafeResult result = {(int)temp, (*endptr != '\0' || temp > INT_MAX || temp < INT_MIN)};
    return result;
}
