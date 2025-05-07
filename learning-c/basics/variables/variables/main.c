#include <stdio.h>

int main() {
    // A variable is defined in a unique way
    // <data_type> <name> (optional: = <value>)

    // Define and declare 21 to variable twenty_one
    int twenty_one = 21;
    printf("Twenty One: %d\n", twenty_one);

    // Define and declare multiple variables
    int a = 1, b = 2, c = 3; // Defines and initializes variables a, b, and c. Memory is allocated.
    int d, e, f; // Defines variables d, e, and f. Memory is allocated, but they are uninitialized (contain indeterminate values).
    printf("a: %d, b: %d, c: %d\n", a, b, c); // Defined and initialized — predictable output
    printf("d: %d, e: %d, f: %d\n", d, e, f); // Undefined behavior — may print garbage values
};