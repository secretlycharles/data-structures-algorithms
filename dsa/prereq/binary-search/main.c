#include <stdio.h>

int binarySearch(int arr[], int low, int high, int x) 
{
    while(low <= high) {
        printf("=================================\n");
        printf("Current Low: %d, Current High: %d\n", low, high);
        int mid = low + (high - low) / 2;
        printf("Calculated Mid: %d\n", mid);

        if(arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    };

    return -1;
}

int main() {
    // Setup binary search variables
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 , 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;

    // Binary Search
    int result = binarySearch(arr, 0, n - 1, x);

    if(result == -1) 
        printf("Element is not present in array\n");
    else 
        printf("Element is present at index %d\n", result);
};