#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5};
    // loop over the entire array
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%d\n", arr[i]);
    };

    // divider
    printf("=============\n");

    // print out elemetns of the array
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);

    return 0;
};