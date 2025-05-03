#include <stdio.h>

int main() {
    register int i = 0;
    for(i = 0; i < 5; i++) {
        printf("Index: %d\n", i);
    };
    return 0;
};