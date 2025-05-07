#include <stdio.h>

void printName() {
    char name[100];
    printf("What is your name? ");
    fgets(name, sizeof(name), stdin);
    printf("Your name is: %s", name);
};

int main() {
    // Print name
    printName();

    return 0;
};
