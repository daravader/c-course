#include "mystrings.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }
    int length = strlength(argv[1]);
    printf("%d\n", length);
    return 0;
}