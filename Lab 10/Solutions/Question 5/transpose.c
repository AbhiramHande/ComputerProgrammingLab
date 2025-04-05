#include "transpose.h"

void transposeByReference(int matrix[4][4]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < i; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    return;
}

void transposeByPointer(int* matrix){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < i; j++){
            int temp = *(matrix + 4*i + j);
            *(matrix + 4*i + j) = *(matrix + 4*j + i);
            *(matrix + 4*j + i) = temp;
        }
    }

    return;
}