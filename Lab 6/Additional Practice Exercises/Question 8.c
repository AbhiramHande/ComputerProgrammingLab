#include <stdio.h>

/*
 * The function starts with binary number initialized to zero
 * The loop starts with place value set to 1 and divides the number by 2 on every turn
 * The loop goes on till the number is reduced to 0
 * In the loop the if condition checks if the remainder on division by 2 is 1 or not
 * If it is one it adds the value of place value
 * The value of place value is multiplied by 10 at the end (so 1 --> 10 --> 100 --> 1000)
 */
unsigned long long int convert_to_binary(int decimal_number){
    unsigned long long int binary_number = 0;

    for(unsigned long long int place_value = 1; decimal_number; decimal_number >>= 1) {
        if (decimal_number & 1)
            binary_number += place_value;
        place_value *= 10;
    }

    return binary_number;
}

int main(){
    int number;
    printf("Enter a decimal natural number: ");
    scanf("%d", &number);

    printf("The number in binary is %lld\n", convert_to_binary(number));
}

/*
 * E.g. Input 9
 * binary number = 0
 * place value = 1
 * decimal number = 9
 * 
 * First loop execution:
 *      9 & 1 (equivalent to 9 % 2) is 1 thus, 
 *      binary_number = 1
 *      place_value = 10
 *      decimal number = 4
 * 
 * Second loop execution:
 *      4 & 1 is 0 thus, 
 *      binary_number = 1
 *      place_value = 100
 *      decimal number = 2
 *  
 * Third loop execution:
 *      2 & 1 is 0 thus, 
 *      binary_number = 1
 *      place_value = 1000
 *      decimal number = 1
 * 
 * Fourth loop execution:
 *      1 & 1 is 1 thus, 
 *      binary_number = 1001
 *      place_value = 10000
 *      decimal number = 0
 * 
 * Loop terminates
 * Function returns 1001
 */