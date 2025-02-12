#include <math.h>
#include <stdio.h>

#define MATH_E 2.71828182846
#define MATH_PI 3.14159265359
// Do not forget to compile with the -lm flag
int main(){
    float x, y;

    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);

    if(y == 0){
        printf("Error: Division undefined: \"y\" cannot be zero\n");
        return 1;
    }

    double exp1, exp2;
    double exp1_num, exp1_den, exp2_num, exp2_den;

    exp1_num = pow(MATH_E, x) * sin(MATH_PI / 3) + 5.6E-5;
    exp1_den = 3 * cos(MATH_PI / 6);
    exp2_num = atan(0.33) + MATH_PI;
    exp2_den = 2 * y;

    exp1 = exp1_num / exp1_den;
    exp2 = sin(exp2_num / exp2_den);

    printf("Expression 1 evaluates to: %lf\n", exp1);
    printf("Expression 2 evaluates to: %lf\n", exp2);
    return 0;
}