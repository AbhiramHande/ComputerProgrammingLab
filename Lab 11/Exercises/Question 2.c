#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 64

/*
 * The mistake in the question is in line 2.
 * The question doesn't allocate any memory for the character array.
 * This will most likely lead to a dereference of a invalid mmemory.
 * Thus, the program might throw a Segmentation Fault.
 * Corrected code is given below:
 */

int main(int argc, char*argv[]){ 
    char* answer = calloc(ARRAY_SIZE, sizeof(char));  
    printf("Please type something: ");  
    fgets(answer, sizeof(char)*ARRAY_SIZE, stdin);
    printf("You typed %s",answer); 
    free(answer);
    return 0; 
}
