#include <stdio.h>

// Function to insert an element in descending order
int insertInOrderDec(int arr[], int x, int count) {
    

    
}

int main() {
    int arr[50];
    int count = 40;

    // Initialize array with 40 elements in descending order
    for (int i = 0; i < count; i++) {
        arr[i] = 100 - 2*i; // Example: 100, 99, 98, ..., 61
    }

    // Insert new element
    int x = 83;

    count = insertInOrderDec(arr, x, count);

    // Print updated array
    printf("Updated array (count = %d):\n", count);
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}