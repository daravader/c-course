#include <stdio.h>
#include "counter.h"

int main() {
    for (int i = 0; i < 10; i++) {
        addoddtosum();
    }
    printf("Sum of first 10 odd numbers: %ld\n", getSum());
    return 0;
}
