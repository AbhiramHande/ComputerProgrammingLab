#include <stdio.h> 

int main(){ 
    int arr[10] = {22,54,78,32,83,45,90,54,75,28};     
    int *ptr = arr; 
    printf("%d\n", *(ptr++)); 
    ptr = arr; 
    printf("%d\n", *ptr++); 
    ptr = arr; 
    printf("%d\n", *++ptr);     
    ptr = arr; 
    printf("%d\n", *ptr+5); 
    ptr = arr; 
    printf("%d\n", --*ptr); 
    return 0; 
} 

/**
 * Explanation:
 * 
 * 1. `*(ptr++)`:
 *    - `ptr` initially points to the first element (22).
 *    - The expression `ptr++` first dereferences the current value of `ptr` (22), then increments `ptr` to the next element.
 *    - The value 22 is printed.
 *
 * 2. `*ptr++`:
 *    - Precedence of `++` (post-increment) is greater than `*` (derefernce)
 *    - The expression `*ptr++` first dereferences the current value of `ptr` (22), then increments `ptr` to the next element.
 *    - The value 22 is printed.
 *
 * 3. `*++ptr`:
 *    - Precedence of `++` (pre-increment) is greater than `*` (derefernce)
 *    - The expression `*++ptr` first increments `ptr` to the next element, then dereferences the value of `ptr` (54). 
 *    - The value 54 is printed.
 *
 * 4. `*ptr + 5`:
 *    - Precedence of `+` (binary addition) is lesser than `*` (derefernce)
 *    - The expression `*ptr` gives the value at the memory location `ptr` points to, which is the first element (22).
 *    - Adding 5 gives `22 + 5 = 27` and `27` is printed
 *
 * 5. `--*ptr`:
 *    - `--*ptr` first derefrences `ptr` (22), then decreases it, making it 21.
 *    - The value 21 is printed.
 *
 * Expected Output: 22 22 54 27 21
 */
