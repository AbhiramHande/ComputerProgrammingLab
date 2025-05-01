#include <stdio.h>

int main(){
    float ppal, rate, time;
    printf("Enter the Principal: ");
    scanf("%f", &ppal);
    printf("Enter the rate of interest (as a percentage): ");
    scanf("%f", &rate);
    printf("Enter the time: ");
    scanf("%f", &time);

    float si = ppal * rate * time * 0.01;
    printf("The simple iterest is %f\n", si);
    return 0;
}