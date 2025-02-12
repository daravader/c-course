#include "transformation.h"

int main() {
    const char *inputs[] = { "-123", "12ab23", "456", "abc" };
    size_t num_inputs = sizeof(inputs) / sizeof(inputs[0]);

    for (size_t i = 0; i < num_inputs; ++i) {
        Transformation result = string_to_integer(inputs[i]);

        if (result.error[0] == '\0') {
            printf("Input: '%s' => Result: %ld\n", inputs[i], result.result);
        } else {
            printf("Input: '%s' => Error: %s\n", inputs[i], result.error);
        }
    }

    return 0;
}