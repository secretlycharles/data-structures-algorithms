#include <stdbool.h>
#include <stdio.h>

void selectionSort(int array[], int size) {
    for(int i = 0; i < size; i++) {
        // Track for any new minimums
        int index = i;

        for(int j = i; j < size; j++) {
            if(array[j] < array[i]) {
                index = j;
            };
        };

        int temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    };

    // Loop over
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    };
    printf("\n");
};

int main() {
    // Create array
    int array[] = {13, 46, 24, 52, 20, 9};
    int size = sizeof(array) / sizeof(array[0]);

    // Print array
    printf("Array Sizeof: %d\n", size);

    // Selection sort
    selectionSort(array, size);

    return 0;
};