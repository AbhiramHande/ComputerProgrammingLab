#include <stdio.h> 

void swap (int a, int b) { 
   int temp; 
   temp = a; 
   a = b; 
   b = temp; 
}  

int main(void){  
    int i=5, j=2; 
    swap(i,j); 
    printf("%d %d", i, j);      // Prints 5 2
} 

/*
 * Function use pass by value
 * Thus, a copy of the values of i and j are used by the function
 * As the function does not return anything, the modified values are lost.
 */