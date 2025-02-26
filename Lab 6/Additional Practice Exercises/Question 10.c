#include <math.h>
#include <stdio.h>

int checkPrime(int number){
    for(int i = 2; i <= sqrt(number); i++)
        if(number % i == 0)
            return 0;
    return 1;
}

int main(){
    int number, flag = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if(number & 1)
        if(checkPrime(number - 2))
            printf("%d can written as 2 + %d\n", number, number - 2);
        else
            printf("%d can't be written as a sum of two primes\n", number);
    else{
        for(int i = 3; i <= number / 2.0; i++)
            if(checkPrime(i) && checkPrime(number - i)){
                flag = 1;
                printf("%d can written as %d + %d\n", number, i, number - i);
            }
        if(flag == 0)
            printf("%d can't be written as a sum of two primes\n", number);
    }
    
    return 0;
}