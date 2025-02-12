#include "counter.h"

static long sum = 0;
static long nextOdd = 1;

static long nextodd() {
    long current = nextOdd;
    nextOdd += 2;
    return current;
}

void addoddtosum() {
    sum += nextodd();
}

long getSum() {
    return sum;
}
