#include <stdio.h>

int fibonacci(int number){
    if(number == 1)
        return 0;
    
    int a = 0, b = 1;
    for(int i = 2; i < number; i++){
        b = a + b;
        a = b - a;
    }
    return b;
}

int main(){
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("The %dth Fibonacci number is %d\n", number, fibonacci(number));
    return 0;
}