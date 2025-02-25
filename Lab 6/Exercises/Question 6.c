#include <stdio.h>

//To make it more efficient you modify the loop to run till sqrt(number)
int isPrime(int number){
    for(int i = 2; i < number; i++)
        if(number % i == 0)
            return 0;
    return 1;
}

 int main(){
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if(isPrime(number))
        printf("The number is prime.\n");
    else
        printf("The number is not prime.\n");
    
    return 0;
 }