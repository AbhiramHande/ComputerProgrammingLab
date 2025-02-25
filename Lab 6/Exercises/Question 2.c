#include <stdio.h> 

int x = -1, y = -2, z = -3; 
 
void f1 (int x, int z) {                        // Global x: 1, y: 2, z: -3   Main z: 4    f1 x: 1, z: 4
   y = ++x + --z + (y+=2);                      // Global x: 1, y: 9, z: -3   Main z: 4    f1 x: 2, z: 3
   printf("%d %d %d\n",x,y,z);                  // Prints local (f1) x, global y and local (f1) z, i.e. 2, 9, 3
} 
 
int main() {                                    // Global x: -1, y: -2, z: -3
    int z = 3;                                  // Global x: -1, y: -2, z: -3   Main z: 3
    x += y += ++z;                              // Global x: 1, y: 2, z: -3   Main z: 4 
    printf("%d %d %d\n", x, y, z);              // Prints global x, global y and local (main) z, i.e. 1, 2, 4
    
    f1(x,z);                            
                                                // Global x: 1, y: 9, z: -3   Main z: 4
    { /* new block begins */ 
        float y = 4.0;                          // Global x: 1, y: 9, z: -3   Main z: 4     Scope y: 4.0
        int x = 0;                              // Global x: 1, y: 9, z: -3   Main z: 4     Scope y: 4.0, x: 0
        x += z = 5 * y;                         // Global x: 1, y: 9, z: -3   Main z: 20    Scope y: 4.0, x: 20
        printf("%d %.2f %d\n", x, y, z);        // Prints local (scope) x, local (scope) y and global z, i.e. 20, 4.00, 20
    } /* end of block */ 
                                                // Global x: 1, y: 9, z: -3   Main z: 20
    printf("%d %d %d\n", x, y, z);              // Prints global x, global y and local (main) z, i.e. 1, 9, 20
} 
