#include <stdio.h>

int main(){
    int num_days;
    printf("Emter the number of days: ");
    scanf("%d", &num_days);

    int num_year, num_months;
    num_year = num_days / 365;
    num_days = num_days % 365;
    num_months = num_days / 30;
    num_days = num_days % 30;

    printf("It has been %d years, %d months and %d days.\n", num_year, num_months, num_days);
    return 0;
}