#include <math.h>
#include <stdio.h>

// Don't forget to compile with -lm flag (as you are using math library)
int main(){
    int exp;
    double base;

    printf("Enter the base number: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exp);

    double ans = pow(base, exp);
    printf("%lf raised to the power of %d is %lf\n", base, exp, ans);
}