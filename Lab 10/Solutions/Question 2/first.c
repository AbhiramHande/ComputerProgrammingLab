#include <stdio.h> 

int main(){ 
    printf("%d", sizeof(void *));
    return 0; 
}

/*
 * The code will print 8 because sizeof(void *) gives the size of a pointer (regardless of what it points to). 
 * On most modern 64-bit systems, the size of any pointer is 8 bytes, as memory addresses are 64 bits in a 64-bit system.
 * In case of a 32-bit system, it will print 4.
 * (void *) is a generic pointer type that can point to any data type, but it doesn't specify what type of data it points to. 
 */