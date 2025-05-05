#include <stdio.h>

int main() {
    char arr [3][4] = {
        { 's', 'k', 'i', },
        { 'b', 'i', 'd', },
        { 'i', ' ', ' '  }
    };

    // fetch array sizes
    int rows = sizeof(arr)/sizeof(arr[0]);
    int columns = sizeof(arr[0])/sizeof(arr[0][0]);
    
    // Loop over current arrays
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("%c", arr[i][j]);
        };
    };
    printf("\n");

    return 0;
};