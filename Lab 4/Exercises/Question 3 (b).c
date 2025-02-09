#include <stdio.h> 

int main() { 
    int a, b; 

    printf("Enter the first number: "); 
    scanf("%d", &a); 
    printf("Enter the second number: "); 
    scanf("%d", &b);

    /* Using XOR Operations
        Truth table of xor is
        A  |  B  | A ^ B
        ------------------
        0  |  0  |   0
        0  |  1  |   1
        1  |  0  |   1
        1  |  1  |   0

        Note that a ^ a = 0 for any value of a --- 1
        Similarly a ^ 0 = a for any value of a --- 2
    */
    a = a ^ b; // a = a ^ b and b = b
    b = a ^ b; // a = a ^ b and b = a ^ b ^ b = a ^ 0 (Using 1) = a (Using 2)
    a = a ^ b; // a = a ^ b ^ a = b ^ 0 (Using 1) = b (Using 2) and b = a

    printf("Value of a = %d, b =%d\n", a ,b); 
    return 0; 
} 