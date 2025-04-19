#include <stdio.h>
#include <stdlib.h>

void sort(int* array, int size){
    for(int i = 0; i < size; i++){
        int min_index = i;
        for(int j = i + 1; j < size; j++)
            if(array[min_index] > array[j])
                min_index = j;
        
        int temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
    
    return;
}

void fun2(int** matrix, int* row_sizes, int rows){
    for(int i = 0; i < rows; i++)
        sort(matrix[i], row_sizes[i]);
}

int main(int argc, char** argv){
    if(argc < 2){
        printf("Usage: %s <number of rows> <columns in each row>\n", argv[0]);
        printf("E.g. %s 3 1 2 3\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    int rows = atoi(argv[1]);
    if(argc != rows + 2){
        printf("Usage: %s <number of rows> <columns in each row>\n", argv[0]);
        printf("E.g. %s 3 1 2 3\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    int** array = (int**)calloc(rows, sizeof(int*));
    int* row_sizes = (int*)calloc(rows, sizeof(int));
    for(int i = 0; i < rows; i++){
        row_sizes[i] = atoi(argv[2 + i]);
        array[i] = (int*)calloc(row_sizes[i], sizeof(int));
        printf("Enter the values in row %d:\n", i);
        for(int j = 0; j < row_sizes[i]; j++){
            scanf("%d", &array[i][j]);
        }
    }

    fun2(array, row_sizes, rows);

    printf("The 2D array after sorting each row:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < row_sizes[i]; j++)
            printf("%d, ", array[i][j]);
        printf("\b\b \n");
    }

    free(row_sizes);
    for(int i = 0; i < rows; i++)
        free(array[i]);
    free(array);
}