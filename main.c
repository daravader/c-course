#include <stdio.h>
#include "product.h"

extern long getProduct();

int main(void) {
    for (int i = 0; i < 5; i++) {
        multiplyproductwitheven();
    }
    printf("Product value: %ld\n", getProduct());
    return 0;
}
