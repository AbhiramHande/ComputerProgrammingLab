#include <stdio.h> 
#include "search.h" 
 
int main() { 
    int arr1[10] = {3,24,32,74,28,9,5,1,6,11}; 
    int x = 32; // element to be searched     
    int arrSize = sizeof(arr1) / sizeof(arr1[0]); 

    int eleIndex = search(arr1, arrSize, x); 
 
    if(eleIndex >= 0) 
        printf("The element x is found in arr1 at position %d\n", eleIndex); 
    else 
        printf("The element x is NOT found in arr1"); 
     
    int arr2[10] = {32,2,3,7,2,99,57,17,65,10}; 
    int y = 17; // element to be searched 
    arrSize = sizeof(arr2) / sizeof(arr2[0]); 
 
    eleIndex = search(arr2, arrSize, y); 
 
    if(eleIndex >= 0) 
        printf("The element y is found in arr2 at position %d\n", eleIndex); 
    else 
        printf("The element y is NOT found in arr2"); 
    
    return 0; 
}