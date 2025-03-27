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
  // this function should print array elements using pointer arithmetic
}

void print_pattern(int (*p1)[cols]){
 // this function should print half pyramid pattern considering specific array emelents
 // as mentioned in the use-cases using pointer arithmetic
}