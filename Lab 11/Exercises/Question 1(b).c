#include <stdio.h>
#include <stdlib.h>

void fun1(int* array, int size){
    array[0] ^= array[9];
    array[9] ^= array[0];
    array[0] ^= array[9];

    return;
}

int main(){
    int* array = (int*)calloc(10, sizeof(int));
    printf("Enter 10 elements:\n");
    for(int i = 0; i < 10; i++)
        scanf(" %d", array + i);
    
    fun1(array, 10);
    for(int i = 0; i < 10; i++)
        printf("%d ", *(array + i));
    printf("\n");
}