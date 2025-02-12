#include <stdio.h>

int main(){
    unsigned long long val = -1; 
    printf("The biggest integer value: %llu\n", val);
    return 0;
}

/*
 * The code prints the largest possible integer because val is declared as an unsigned long long, which 
 * can only store non-negative values. When assigned -1, it wraps around to the maximum value that can be 
 * represented by an unsigned integer of that size. In this case, it becomes 2^64 - 1, which is the 
 * largest possible value for an unsigned long long.
*/