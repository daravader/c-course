#include "product.h"

static long product = 1;
static long nexteven = 0;

static long getNextEven() {
    nexteven += 2;
    return nexteven;
}

void multiplyproductwitheven() {
    product *= getNextEven();
}

long getProduct() {
    return product;
}
