#include <stdio.h>
#include <stdio.h>

void displayHelpMenu() {
    printf("available functions:\n");
    printf("1. strlength -finds the length of a given string\n");
    printf("2. strconcat -concatenates two strinhs \n");
    printf("3. strcompare -compares two strings\n");
}
int main() {
    displayHelpMenu();
    return 0;
}