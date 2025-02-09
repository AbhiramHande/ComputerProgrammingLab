#include <math.h>
#include <stdio.h>

// Don't forget to compile with -lm flag (as you are using math library)
int main(){
    float a, b, c;
    printf("Enter the coefficients of the quadratic polynomial: ");
    scanf("%f %f %f", &a, &b, &c);

    float det = pow(b, 2) - (4*a*c);
    if(det < 0){
        printf("No real roots.\n");
        return 1;
    }

    float x1 = (-b + sqrt(det))/(2*a);
    float x2 = (-b - sqrt(det))/(2*a);
    printf("The roots of the polynomial are %f and %f\n", x1, x2);
    return 0;
}