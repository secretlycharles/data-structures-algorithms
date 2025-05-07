#include <stdio.h>

int main() {
    printf("=================================================\n");
    printf("Size of char: %zu bytes\n", sizeof(char)); // 1 byte
    printf("Size of int: %zu bytes\n", sizeof(int)); // 4 bytes
    printf("Size of long: %zu bytes\n", sizeof(long)); // 4 bytes
    printf("Size of float: %zu bytes\n", sizeof(float)); // 4 bytes
    printf("Size of double: %zu bytes\n", sizeof(double)); // 8 bytes
    
    printf("=================================================\n");
    printf("Size of char pointer*: %zu bytes\n", sizeof(char*)); // 8 bytes (Size of a pointer to char)
    printf("Size of int pointer*: %zu bytes\n", sizeof(int*)); // 8 bytes (Size of a pointer to int)
    printf("Size of long pointer*: %zu bytes\n", sizeof(int*)); // 8 bytes (Size of a pointer to long)
    printf("Size of float pointer*: %zu bytes\n", sizeof(int*)); // 8 bytes (Size of a pointer to float)
    printf("Size of double pointer*: %zu bytes\n", sizeof(int*)); // 8 bytes (Size of a pointer to double)
    return 0;
}