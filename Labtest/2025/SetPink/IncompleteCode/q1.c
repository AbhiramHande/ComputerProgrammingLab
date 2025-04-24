#include <stdio.h>

#define SIZE 50  // Maximum size of the array

// Function to insert an element in ascending order and return the updated count
int insertInOrderAsc(int arr[], int count, int x) {
    
}

int main() {
    int arr[SIZE] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19,
                     21, 23, 25, 27, 29, 31, 33, 35, 37, 39,
                     41, 43, 45, 47, 49, 51, 53, 55, 57, 59,
                     61, 63, 65, 67, 69, 71, 73, 75, 77, 79
                    };

    int count = 40;  // Number of elements currently in arr
    int new_element = 50;  // Element to insert

    // Insert the new element
    count = insertInOrderAsc(arr, count, new_element);

    // Display the updated array
    printf("Updated array:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}