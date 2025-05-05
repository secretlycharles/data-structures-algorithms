#include <stdio.h>

int main() {
    int a = 10, b = 2;

    printf("a + b = %d\n", a + b); // add
    printf("a - b = %d\n", a - b); // sub
    printf("a % b = %d\n", a % b); // modouls
    printf("a / b = %d\n", a / b); // divide
    printf("a * b = %d\n", a * b); // multiply
    printf("a %d\n", +a); // unary plus
    printf("a %d\n", -a); // unary negate
    printf("a++ = %d\n", a++); // inc
    printf("a-- = %d\n", a--); // dec

    return 0;
};