#include <stdio.h>
#include <stdlib.h>

// Declare extern variable to be later rewritten
extern int variable;

// Printing utility tool to print variable
void printVariable() {
    printf("Variable's value was: %d", variable);
};