#include <stdio.h>

long factorial(long num){
    if(num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

long factorial_sum(long num){
    if(num == 1)
        return 1;
    else
        return factorial(num)/num + factorial_sum(num - 1);
}

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    long result = factorial_sum(number);
    printf("The result is %ld\n", result);
    return 0;
}