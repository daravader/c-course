#include <stdio.h>
#define COMMAND(NAME, TYPE) TYPE##_##NAME##_command
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)(void)
#define SWAP(A, B, TYPE) do { TYPE temp = A; A = B; B = temp; }while (0)

DEFINE_COMMAND(quit, internal) { printf("Executing internal quit command\n"); }

DEFINE_COMMAND(start, external) { printf("Executing external start command\n"); }

int main() {
    internal_quit_command();
    external_start_command();
    
    int x = 5, y = 10;
    SWAP(x, y, int);
    printf("swap: x = %d, y = %d\n", x, y);
    return 0;
}
