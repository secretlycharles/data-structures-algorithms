#include <stdio.h>

char getOperator() {
    char operator;

    while(1) {
        printf("Please enter an operator for the calculator (e.g: +, -, *, /, %%): ");
        operator = getchar();

        // Flush the newline if there's one left in the buffer
        while (getchar() != '\n'); 

        if (operator == '+' || operator == '-' || operator == '*' || operator == '/' || operator == '%') {
            return operator;
        } else {
            printf("Unsupported operator! Please try again.\n");
        }
    };
};

int getNumber() {
    int number;

    // Get a number
    printf("Please enter a valid number: ");
    scanf("%d", &number);

    // Consume \n
    getchar();

    // Return number
    return number;
};

void calculator(int val1, int val2, char operator) {
    switch (operator)
    {
    case '+':
        printf("Adding Values: %d\n", val1 + val2);
        break;
    case '-':
        printf("Subtracting Values: %d\n", val1 - val2);
        break;
    case '*':
        printf("Multiplying Values: %d\n", val1 * val2);
        break;
    case '/':
        printf("Dividing Values: %d\n", val1 / val2);
        break;
    case '%':
        printf("Modulus Values: %d\n", val1 % val2);
        break;
    default:
        printf("Somehow you've passed in an invalid operator!\n");
        break;
    }
};

int main() {
    // Get operator
    char operator = getOperator();
    printf("Passed in Operator: %c\n", operator);

    // Get values
    int val1 = getNumber();
    int val2 = getNumber();
    printf("val1: %d, val2: %d\n", val1, val2);

    // Calculate Numbers
    calculator(val1, val2, operator);

    return 0;
};