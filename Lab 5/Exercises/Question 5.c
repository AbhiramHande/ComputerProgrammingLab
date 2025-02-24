#include <stdio.h>

/* 
 * i is uninitialized and will therefore take a garbage value
 * when entering the loop it will be assigned a value of 2
 * After printing (2, 4, 6) it's value will be changed back to 0
 * When it re-enters the loop the value will then further be changed to 2
 * This results in an infinite loop
 */

int main(){
    int i; 
    while (i = 2) { 
        printf("Some even numbers: %d %d %d\n", i, i+2, i+4); 
        i = 0; 
    }
}
