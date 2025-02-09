#include <stdio.h> 

int main() { 
    int a, b; 

    printf("Enter the first number: "); 
    scanf("%d", &a); 
    printf("Enter the second number: "); 
    scanf("%d", &b);

    // Using arithmetic operations
    a = a + b; // a = a + b and b = b
    b = a - b; // a = a + b and b = a + b - b = a
    a = a - b; // a = a + b - a = b and b = a

    printf("Value of a = %d, b =%d\n", a ,b); 
    return 0; 
} 