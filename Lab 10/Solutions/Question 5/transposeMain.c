#include <stdio.h>
#include "transpose.h"

void printMatrix(int matrix[4][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return;
}

int main(){
    int mat1[4][4]= {
        {1,2,3,4},
        {4,6,7,2},
        {5,9,3,1},
        {6,2,5,1}
    };

    printf("Matrix before transpose\n");
    printMatrix(mat1);

    printf("\nMatrix after transposing using pass by reference\n");
    transposeByReference(mat1);
    printMatrix(mat1);

    printf("\nMatrix after again transposing using pass by pointers\n");
    transposeByPointer((int*) mat1);
    printMatrix(mat1);
    
    return 0;
}