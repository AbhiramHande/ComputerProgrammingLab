#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void insertValue(Node* grid[][COLS], int row, int col, int val);
int rowSum(Node* grid[][COLS], int row);
int colSum(Node* grid[][COLS], int col);

int main() {
    Node* grid[ROWS][COLS] = {NULL}; // Initialize all cells to NULL

    insertValue(grid, 0, 0, 10);
    insertValue(grid, 0, 0, 20);
    insertValue(grid, 0, 2, 30);
    insertValue(grid, 1, 0, 5);
    insertValue(grid, 2, 1, 15);

    printf("Sum of row 0: %d\n", rowSum(grid, 0));  // Expected output: 60
    printf("Sum of col 0: %d\n", colSum(grid, 0));  // Expected output: 35

    return 0;
}
