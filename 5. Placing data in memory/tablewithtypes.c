#include <stdio.h>
#include <limits.h>n

int main() {
    printf("%-15s %-10s %-10s %-20s %-20s %-15s %-20s\n",
           "Type", "Format", "Bytes", "Signed Max", "Signed Min", "Unsigned", "Unsigned Max");
    printf("%-15s %-10s %-10s %-20s %-20s %-15s %-20s\n",
           "---------------", "----------", "----------", "--------------------", "--------------------", "---------------", "--------------------");

    printf("%-15s %-10s %-10zu %-20d %-20d %-15s %-20u\n", 
           "char", "%c", sizeof(char), SCHAR_MAX, SCHAR_MIN, "%hhu", UCHAR_MAX);
    printf("%-15s %-10s %-10zu %-20d %-20d %-15s %-20u\n", 
           "short", "%hd", sizeof(short), SHRT_MAX, SHRT_MIN, "%hu", USHRT_MAX);
    printf("%-15s %-10s %-10zu %-20d %-20d %-15s %-20u\n", 
           "int", "%d", sizeof(int), INT_MAX, INT_MIN, "%u", UINT_MAX);
    printf("%-15s %-10s %-10zu %-20ld %-20ld %-15s %-20lu\n", 
           "long", "%ld", sizeof(long), LONG_MAX, LONG_MIN, "%lu", ULONG_MAX);
    printf("%-15s %-10s %-10zu %-20lld %-20lld %-15s %-20llu\n", 
           "long long", "%lld", sizeof(long long), LLONG_MAX, LLONG_MIN, "%llu", ULLONG_MAX);

    return 0;
}
