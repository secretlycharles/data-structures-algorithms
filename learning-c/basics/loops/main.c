#include <stdio.h>

int main() {
    // loop over variables
    int i = 0;
    for(int i = 0; i < 20; i++) {
        printf("%d ", i);
    };
    printf("\n");
    
    // reset and loop over again
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while(i < 20);
    printf("\n");

    // reset and loop over again
    i = 0;
    while(i < 20) {
        printf("%d ", i);
        i++;
    };
    printf("\n");

    return 0;
};