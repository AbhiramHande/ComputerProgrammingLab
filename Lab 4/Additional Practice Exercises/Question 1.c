#include <math.h>
#include <stdio.h>

// Do not forget to compile with the -lm flag
int main(){
    int principal;
    double rate, time;

    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    printf("Enter the time: ");
    scanf("%lf", &time);
    printf("Enter the rate of interest (%%): ");
    scanf("%lf", &rate);

    double amt = principal * pow((1 + rate/100.0), time);
    printf("The final amount is %lf\n", amt);
    return 0;
}
