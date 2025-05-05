#include <stdio.h>

int main() {
    // because c naturally doesn't have strings, we have to
    // use a char array. when we are also fetching user-input,
    // we have to make sure we don't buffer overflow with the
    // defined amount of bytes with char name. fgets prevents
    // this with buffer overflowing
    char name[100];

    // fetch input
    printf("What was your name? ");
    fgets(name, sizeof(name), stdin);
    printf("Your name was: %s", name);
    
    return 0;
};