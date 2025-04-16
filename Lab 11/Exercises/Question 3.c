#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    printf("Enter the size of the vectors: ");
    scanf("%d", &size);

    int* vector1 = calloc(size, sizeof(int)); 
    int* vector2 = calloc(size, sizeof(int));

    printf("Enter the first vector:\n");
    for(int i = 0; i < size; i++)
        scanf(" %d", &vector1[i]);

    printf("Enter the second vector:\n");
    for(int i = 0; i < size; i++)
        scanf(" %d", &vector2[i]);

    int dot_product = 0;
    for(int i = 0; i < size; i++)
        dot_product += vector1[i] * vector2[i];
    
    printf("The dot products of the two vectors is %d\n", dot_product);
}