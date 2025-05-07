#include <stdio.h>
#include <string.h>

struct Person {
    char name[100];
    int age;
};

union Business {
    char name[100];
    int money;
};

enum Languages {
    C,
    CPP,
    Python,
    TypeScript,
    JavaScript,
    Rust,
    Golang
};

typedef char Company;

int main() {
    // declaring variable of the person struct
    struct Person me;

    // initialize struct members
    strcpy(me.name, "charles");
    me.age = 18;

    // print structs of the member
    printf("Name: %s\n", me.name);
    printf("Age: %d\n", me.age);

    // create a union
    union Business business;

    // write to business.name
    strcpy(business.name, "charles incorporated");
    printf("business.name: %s\n", business.name);

    // write to business.money
    business.money = 1000000;
    printf("business.money: %d\n", business.money);

    // only because one thing can hold that memory address (garbage value)
    printf("we see business.name disappears: %d\n", business.name);

    // create enum
    enum Languages codingLanguage = Python;
    printf("We are currently coding in: %d\n", codingLanguage);

    // Company
    Company* name = "charles incorporated";
    printf("Business Name: %s\n", name);

    return 0;
};