#include <stdio.h>

int main(){
    printf("Enter an integer: ");
    int n, sum = 0;
    scanf("%d", &n);

    if(n < 0){
        for(int i = 2*n; i >= 3*n; i--)
            sum += i;
        printf("The sum of integers from %d to %d is %d\n", 2*n, 3*n, sum);
    }
    else if(n > 0){
        for(int i = n; i <= 2*n; i++)
            sum += i;
        printf("The sum of integers from %d to %d is %d\n", n, 2*n, sum);
    }
    else
        printf("0\n");

    return 0;
}