#include "pattern.h"

void main(){
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    cols = rows;
    int (*x1)[cols];
    
    int y[rows][cols];
    for (int i = 0; i<rows; i++)
        for (int j = 0; j<cols; j++)
            y[i][j] = k++;

    x1 = y;
    print_array(x1);
    print_pattern(x1);
} 

void print_array(int (*p1)[cols]){
    for(int i = 0; i < cols; i++){
        for(int j = 0; j < cols; j++)
            printf("%d ", (*(p1 + i))[j]);
        printf("\n");
    }
}

void print_pattern(int (*p1)[cols]){
    for(int i = 0; i < cols; i++){
        for(int j = 0; j <= i; j++)
            printf("%d ", (*(p1 + i))[j]);
        printf("\n");
    }
}