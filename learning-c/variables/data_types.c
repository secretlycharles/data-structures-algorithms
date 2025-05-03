#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaring two integer variables defined with integers
    int one = 10;
    int two = 20;

    // Declaring an integer variable defined with the sum of the two integers above
    int sum = one + two;
    printf("The sum of these two numbers were: %d\n", sum);
    printf("%d bytes", sizeof(sum));
};