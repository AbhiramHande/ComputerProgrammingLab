#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void insertValue(Node* grid[][COLS], int row, int col, int val){
    Node* new_node = malloc(sizeof(Node));
    new_node->data = val;

    Node* old_head = grid[row][col];
    grid[row][col] = new_node;
    new_node->next = old_head;

    return;
}

int rowSum(Node* grid[][COLS], int row){
    int row_sum = 0;

    for(int i = 0; i < COLS; i++)
        for(Node* ptr = grid[row][i]; ptr != NULL; ptr = ptr->next)
            row_sum += ptr->data;

    return row_sum;
}

int colSum(Node* grid[][COLS], int col){
    int col_sum = 0;

    for(int i = 0; i < ROWS; i++)
        for(Node* ptr = grid[i][col]; ptr != NULL; ptr = ptr->next)
            col_sum += ptr->data;

    return col_sum;
}

int main() {
    Node* grid[ROWS][COLS] = {NULL};

    insertValue(grid, 0, 0, 10);
    insertValue(grid, 0, 0, 20);
    insertValue(grid, 0, 2, 30);
    insertValue(grid, 1, 0, 5);
    insertValue(grid, 2, 1, 15);

    printf("Sum of row 0: %d\n", rowSum(grid, 0));
    printf("Sum of col 0: %d\n", colSum(grid, 0));

    return 0;
}
