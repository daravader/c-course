#include <stdio.h>

void printLightsState(unsigned char lights) {
    for (int i = 0; i < 8; i++) {
        printf("Headlight %d: %s\n", i + 1, (lights & (1 << i)) ? "ON" : "OFF");
    }
}

int main() {
    unsigned char lights = 237; // 11101101 in binary
    printf("Initial state of headlights:\n");
    printLightsState(lights);
    return 0;
}
