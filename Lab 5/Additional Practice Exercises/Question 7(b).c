#include <stdio.h>

// Using switch-case statements
int main(){
    printf("Usage <number> <operation> <number>\n");
    printf("Valid operations:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulo (%%)\n");
    double num1, num2;
    char operator;
    scanf("%lf %c %lf", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            printf("Sum is %lf\n", num1 + num2);
            break;
        
        case '-':
            printf("Difference is %lf\n", num1 - num2);
            break;

        case '*':
            printf("Product is %lf\n", num1 * num2);
            break;
        
        case '/':
            if(num2 == 0)
                printf("Error: Division by zero\n");
            else
                printf("Result is %lf\n", num1 / num2);
            break;

        case '%':
            if(num2 == 0)
                printf("Error: Division by zero\n");
            else if(num1 != (int)num1 || num2 != (int)num2)
                printf("Error: Modulo operator works on integers\n");
            else
                printf("Remainder is %d\n", (int)num1 % (int)num2);
            break;

        default:   
            printf("Error: Operator unrecognized.\n");
            break;
    }

    return 0;
}