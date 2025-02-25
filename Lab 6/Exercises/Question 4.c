#include <stdio.h>

void function(double num){
    double square, cube, area;

    square = num * num;
    cube = num * num * num;
    area = 3.14159 * square;

    printf("The square of the number is %lf\n", square);
    printf("The cube of the number is %lf\n", cube);
    printf("The area of a circle with radius %lf is %lf", num, area);
    return;
}

int main() {
    int number;
    printf("Enter any number: ");
    scanf("%lf", &number);
    function(number);
    return 0;
}