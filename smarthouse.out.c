#include <stdio.h>

int main(void) {
    unsigned char lights = 189; // Initial state of the lights
    printf("Lights that are off:\n");
    for (int i = 0; i < 8; i++) {
        if (!((lights >> i) & 1)) {
            printf("Lamp %d is off\n", i + 1);
        }
    }
    return 0;
}
