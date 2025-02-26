#include <stdio.h>

int show(int x) { 
    printf("%d %d\n", x, x*x); 
    return x*x; 
    printf("%d %d\n", x, x*x*x); 
    return x*x*x; 
} 

int main(){
    int x = 4;
    int y = show(x);
    printf("%d\n", y);
    return 0;
}

/*
 * The function prints the x ann x*x
 * The function prematurely returns x*x
 * Thus, the next two lines will not be executed
 */