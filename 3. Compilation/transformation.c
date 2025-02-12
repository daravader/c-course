#include "transformation.h"

Transformation string_to_integer(const char *input) {
    Transformation tmp;
    char *endptr;

    tmp.result = strtol(input, &endptr, 10);

    if (*endptr != '\0') {
        tmp.result = 0;
        strncpy(tmp.error, "Invalid input string", MAX_ERROR_LEN);
    } else {
        tmp.error[0] = '\0';
    }

    return tmp;
}
