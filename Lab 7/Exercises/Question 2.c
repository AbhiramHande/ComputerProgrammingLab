#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void selectionSort(int array[], int size){
    for(int i = 0; i < size; i++){
        int max_index = i;
        for(int j = i+1; j < size; j++)
            if(array[max_index] < array[j])
                max_index = j;

        if(max_index != i){
            int temp = array[i];
            array[i] = array[max_index];
            array[max_index] = temp;
        }
    }

    return;
}

int linearSearch(int key, int array[], int size){
    for(int i = 0; i < size; i++)
        if(array[i] == key)
            return i;
    return -1;
}

int binarySearch(int key, int array[], int size){
    selectionSort(array, size);

    int low = 0;
    int high = size - 1;

    while(low <= high){
        int mid = low + (high - low) / 2;
        if(array[mid] == key)
            return mid;
        if(array[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

int main(){
    int choice, position, key;
    int array[SIZE];

    printf("Enter 1 for Linear Search.\n");
    printf("Enter 2 for Binary Search.\n");
    printf("Enter 3 for Sorting array.\n");
    printf("Enter 4 to Exit.\n");

    while(1){
        scanf("%d", &choice);
        switch (choice){
        case 1:
            printf("Enter 10 integers:\n");
            for(int i = 0; i < SIZE; i++)
                scanf("%d", &array[i]);
            
            printf("Enter the number to search for: ");
            scanf("%d", &key);
            
            position = linearSearch(key, array, SIZE);
            if(position == -1)
                printf("The element was not found.\n");
            else
                printf("The element was found at %d.\n", position);
            break;
        
        case 2:
            printf("Enter 10 integers:\n");
            for(int i = 0; i < SIZE; i++)
                scanf("%d", &array[i]);
            
            printf("Enter the number to search for: ");
            scanf("%d", &key);
            
            position = binarySearch(key, array, SIZE);
            if(position == -1)
                printf("The element was not found.\n");
            else
                printf("The element was found at %d (in the sorted array).\n", position);
            break;
        
        case 3:
            printf("Enter 10 integers:\n");
            for(int i = 0; i < SIZE; i++)
                scanf("%d", &array[i]);
            
            selectionSort(array, SIZE);
            
            printf("The sorted array (descending order):");
            for(int i = 0; i < SIZE; i++)
                printf("%d\t", array[i]);
            printf("\n");

            printf("The sorted array (ascending order):");
            for(int i = SIZE; i >= 0; i--)
                printf("%d\t", array[i]);
            printf("\n");
            break;
        
        case 4:
            printf("Bye Bye SeachNSort.\n");
            exit(EXIT_SUCCESS);
            break;
        
        default:
            printf("Enter a valid choice (1-4).\n");
            break;
        }
    }

    return 0;
}