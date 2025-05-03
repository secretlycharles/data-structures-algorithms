#include <stdio.h>

// Declare and define global variable
int variable = 100;

// Declaration of function defined in another file (resolved at link time)
void printVariable();

int main() {
    // Print variable
    printVariable();

    // Return success
    return 0;
};