#include <stdio.h>

int factorial(int num){
    int factorial = 1;
    for(int i = 1; i <= num; i++)
        factorial *= i;
    return factorial;
}

long factorial_sum(long num){
    int sum = 0;
    for(int i = 1; i <= num; i++)
        sum += factorial(i) / i;
    return sum;
}

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    long result = factorial_sum(number);
    printf("The result is %ld\n", result);
    return 0;
}