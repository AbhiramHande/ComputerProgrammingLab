#include <stdio.h>

int main(){
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int units_digit = number % 10;
    int tens_digit = (number / 10) % 10; 
    int hundreds_digit = (number / 100) % 10;
    int thousands_digit = (number / 1000) % 10;

    if(number / 10000 != 0 || thousands_digit == 0){
        printf("The input number must be a four digit number.\n");
        return -1;
    }

    int flag = 0;
    flag += (units_digit == thousands_digit) ? 0 : 1;
    flag += (tens_digit == hundreds_digit) ? 0 : 1;

    flag == 0 ? printf("The number %d%d%d%d is a palindrome.\n", units_digit, tens_digit, hundreds_digit, thousands_digit) : printf("The number is not a plaindrome.\n");
    return 0;
}