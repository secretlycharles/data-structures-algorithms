#include <stdio.h>
#include <string.h>

int main() {
    // Prints Hello World
    printf("Hello World\n");

    // Prints 22
    int age = 22;
    printf("%d\n", age); //%d is a format specificer used to print signed demical integers

    // Prints this is my string
    fputs("This is my string\n", stdout);

    // // Ask for input for how many hours studied
    int hours;
    printf("How many hours studied?\n");
    scanf("%d", &hours);
    
    // prevent \n from being read below
    getchar();
    printf("Hours Studied: %d\n", hours);

    // Ask for name, can handle spaces
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    printf("Hello, %s", name);

    // Ask for a long string and print (Cant handle spaces)
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("You entered: %s\n", str);


    return 0; // 0 == success, 1 == failure
}