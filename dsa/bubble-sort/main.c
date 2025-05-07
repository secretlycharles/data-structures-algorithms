#include <stdbool.h>
#include <stdio.h>

void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int array[], int size) {
    // if we've swapped, then there is still unsorted elements
    bool swapped = false;
    for(int i = 0; i < size - 1; i++) {
        // swap tracker
        swapped = false;

        // scan further forward
        for(int j = 0; j < size - i - 1; j++) {
            // if the element infront of j is greater than j, swap
            if(array[j] > array[j+1]) {
                // swap over
                swap(&array[j], &array[j+1]);

                // alert we've swapped
                swapped = true;
            };
        };

        // if this isn't true, then we've sorted the entire array
        if(!swapped) {
            break;
        };
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
    bubbleSort(array, size);

    return 0;
};