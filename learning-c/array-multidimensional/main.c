#include <stdio.h>

int main() {
    char arr [2][3] = {
        { 's', 'k', 'i' },
        { 'b', 'i', 'd' },
    };

    // Loop over current arrays
    int rows = sizeof(arr)/sizeof(arr[0]);
    int columns = sizeof(arr[0])/sizeof(arr[0][0]);
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("%c", arr[i][j]);
        };
    };
    printf("\n");

    return 0;
};