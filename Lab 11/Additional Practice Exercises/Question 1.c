#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    if(argc != 3){
        printf("Usage <program> <size of first array> <size of second array>\n");
        exit(EXIT_FAILURE);
    }

    int size_int_array = strtol(argv[1], NULL, 10);
    int size_flt_array = strtol(argv[2], NULL, 10);

    void** new2D = (void**)calloc(2, sizeof(void*));
    new2D[0] = (int*)calloc(size_int_array, sizeof(int));
    new2D[1] = (float*)calloc(size_flt_array, sizeof(float));

    printf("Enter elements of Integer Array:\n");
    for(int i = 0; i < size_int_array; i++)
        scanf("%d", &((int*)new2D[0])[i]);
    printf("Enter elements of Float Array:\n");
    for(int i = 0; i < size_flt_array; i++)
        scanf("%f", &((float*)new2D[1])[i]);
    
    printf("Integer Array (%d elements):\n", size_int_array);
    for(int i = 0; i < size_int_array; i++)
        printf("%d, ", ((int*)new2D[0])[i]);
    printf("\b\b \n");

    printf("Float Array (%d elements):\n", size_flt_array);
    for(int i = 0; i < size_int_array; i++)
        printf("%g, ", ((float*)new2D[1])[i]);
    printf("\b\b \n");

    return 0;
}