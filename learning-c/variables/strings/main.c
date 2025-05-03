#include <stdio.h>
#include <string.h>

int main() {
    // Manually define hello_world (11) but since there's a null term (12)
    char string_name[12] = "hello_world";
    printf("%s\n", string_name);

    // Print hello world with compiler assistance
    char hello_world[] = "hello world";
    printf("%s\n", hello_world);

    // Print the length of them
    printf("Length of string_name: %d\n", strlen(string_name));
    printf("Length of hello_world: %d\n", strlen(hello_world));

    // Loop over 
    for(int i = 0; i < 11; i++) {
        printf("string_name: (Index: %d, Letter: %c)\n", i, string_name[i]);
    };

    // Loop over 
    for(int i = 0; i < 11; i++) {
        printf("hello_world: (%d, Letter: %c)\n", i, hello_world[i]);
    };

    // Return success
    return 0;  
};