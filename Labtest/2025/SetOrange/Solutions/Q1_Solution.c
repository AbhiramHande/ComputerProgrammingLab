#include <stdio.h>

// Function to insert an element in descending order
int insertInOrderDec(int arr[], int x, int count) {
    if(count == 50){
        printf("Can't add any more elements");
        return count;
    }
    
    int low = 0, high = count - 1;
    int mid = -1;

    while(low <= high){
        mid = (low + high) / 2;

        if(arr[mid] == x)
            break;
        else if(arr[mid] > x)
            low = mid + 1;
        else    
            high = mid -1;
    }

    if(arr[mid] > x)
        mid++;

    for(int i = count++; i > mid; i--)
        arr[i] = arr[i - 1];
    arr[mid] = x;

    return count;
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