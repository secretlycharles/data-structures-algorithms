#include <stdio.h>

void clicker() {
    // Define the int counter staticailly so it exists even
    // after exiting the scope.
    static int counter = 0;

    // add to the counter
    counter += 1;

    // print the counter
    printf("Counter: %d\n", counter);
};

int main() {
    // Counter: 1
    clicker();

    // Counter: 2
    clicker();

    // Return success
    return 0;
};