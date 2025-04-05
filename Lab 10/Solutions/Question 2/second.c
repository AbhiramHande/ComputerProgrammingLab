#include <stdio.h>

void function(char **ptr){ 
    char *ptr1; 
    ptr1 = (ptr += sizeof(int))[-2]; 
    printf("%s\n", ptr1); 
}

int main() { 
    char *arr[] = { "ant", "bat", "cat", "dog", "egg", "fly" }; 
    function(arr); 
    return 0; 
} 

/*
 * ptr += sizeof(int): ptr is a char **, so adding sizeof(int) to ptr increments the pointer by 4 (the size of an int typically).
 * [-2]: After the pointer is incremented, we access the element that is 2 positions before the new ptr.
 * 
 * Effectively:
 *  - ptr initially points to arr[0] ("ant").
 *  - After the pointer is incremented by 4, ptr now points to "egg".
 *  - Accessing ptr[-2] means looking 2 positions before ptr[4], which is arr[2] i.e. "cat".
 *  - Thus, final output is "cat".
 */