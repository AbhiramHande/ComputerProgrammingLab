#include <stdio.h> 

int main() { 
    int a, b, c; 
    printf("Enter the first number: "); 
    scanf("%d", &a); 
    printf("Enter the second number: "); 
    scanf("%d", &b);
    c = a; // c = a, a = a and b = b
    a = b; // c = a, a = b and b = b
    b = c; // c = a, a = b and b = a
    printf("Value of a = %d, b =%d\n", a ,b); 
    return 0; 
} 