#include <math.h>
#include <stdio.h>

// Don't forget to compile with -lm flag as this uses math.h
int IsArmstrong(int number){
    int temp = number;
    int digits = 0;
    while(temp){
        digits++;
        temp /= 10;
    }

    temp = number;
    int sum = 0;
    while(temp){
        int units_digit = temp % 10;
        sum += pow(units_digit, digits);
        temp /= 10;
    }

    return number == sum;
}

int main(){
    int start, end;
    printf("Enter the lower limit of the range: ");
    scanf("%d", &start);
    printf("Enter the upper limit of the range: ");
    scanf("%d", &end);

    if(start > end){
        printf("Invalid range.\n");
        return -1;
    }

    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for(int i =  start; i <= end; i++)
        if(IsArmstrong(i))
            printf("%d\n", i);
    return 0;
}