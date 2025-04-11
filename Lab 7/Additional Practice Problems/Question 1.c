#include <stdio.h>

void foo(int arr[]){ 
    printf("Size of array arr in foo is = %lu\n", sizeof(arr)); 
}

int main(){
    int arr[] = {10,20,45,67,68}; 
    printf("Size of array arr in main is = %lu\n", sizeof(arr));
    foo(arr);
    return 0;
}

/*
 * Explanation:
 * 
 * 1. In the `main` function:
 *    - The variable `arr` is a statically allocated array with 5 elements.
 *    - The `sizeof(arr)` expression evaluates to the total memory allocated for the array.
 *    - As each `int` is 4 bytes, the total size of `arr` is 5 * 4 = 20 bytes.
 *    - So, the output will be: "Size of array arr in main is = 20".
 * 
 * 2. In the `foo` function:
 *    - The parameter `arr[]` is interpreted as a pointer to the first element of the array.
 *    - The size of a pointer on 64-bit systems is 8 bytes.
 *    - Therefore, the output will be: "Size of array arr in foo is = 8".
 */