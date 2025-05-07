#include <stdio.h>
 
int getAge() {
    // Fetch age
    int age;

    printf("What is your current age? ");
    scanf("%d", &age);

    return age;
};

int main() {
    // Prompt age
    int age = getAge();

    // Print age
    printf("Your current age is: %d", age);
};