#include <stdio.h>

int leading_digit(int number){
    int digit;
    for(digit = 0; number; number /= 10)
        digit = number % 10;
    return digit;
}

int main(){
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("The leading digit of the number is %d\n", leading_digit(number));
    return 0;
}