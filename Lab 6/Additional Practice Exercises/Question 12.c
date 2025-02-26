#include <stdio.h> 
 
int confusion(int x, int y) { 
   x = 2*x + y; 
   return x; 
} 

int main(void) { 
    int x = 2, y = 5; 
    y = confusion(y, x);        // x: 2 y: 2*5 + 2 = 12
    x = confusion(y, x);        // x: 2*12 + 2 = 26 y: 12
    printf("%d %d\n", x, y);    // Prints 26 12
    return 0; 
}