#include <stdio.h>

int fibonacci(int number){
    if(number == 1 || number == 2)
        return number - 1;
    else 
        return fibonacci(number - 1) + fibonacci(number - 2);
}

int main(){
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("The %dth Fibonacci number is %d\n", number, fibonacci(number));
    return 0;
}