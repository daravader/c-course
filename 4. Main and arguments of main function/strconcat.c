#include "mystrings.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <string1> <string2>\n", argv[0]);
        return 1;
    }

    char str1[51];
    strncpy(str1, argv[1], 50);
    str1[50] = '\0';

    strconcat(str1, argv[2]);
    printf("%s\n", str1);
    return 0;
}