#include <stdio.h>

void floosh(int* ptr) {
    // the pointer interview question 😳😳
    *ptr = 25; // will it change?!?!?!?!
};

int main() {
    // Declare x with a int pointer defined with 100
    int x = 100;
    
    // will it swap the variabel?!?!?!?
    // u wont understand dereferences without this question!!
    floosh(&x);

    // what will it print omg ⁉️⁉️⁉️
    printf("%d", x);

    return 0;
};