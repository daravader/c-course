#include <stdio.h>

#define DEBUG_VAR(var) printf("[DEBUG] File: %s, Line: %d, Variable: %s, Value: %d\n", __FILE__, __LINE__, #var, (int)(var))

int main() {
    int x = 42;
    int y = 100;
    DEBUG_VAR(x);
    DEBUG_VAR(y);
    return 0;
}
