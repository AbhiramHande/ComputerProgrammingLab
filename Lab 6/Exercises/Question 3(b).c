#include<stdio.h> 

int diff(int x, int y){  
    return x-y; 
} 

int sum(int x, int y){  
    return x+y; 
} 

int main(void){ 
    int a=20, b=5, c=2, d=6; 
    printf("%d\t", a + diff(d,c));              // a + (d-c) --> Prints 24
    printf("%d\n", diff(a,sum(diff(b,c),d)));   // (a - ((b - c) + d)) --> Prints 11
    return 0; 
}