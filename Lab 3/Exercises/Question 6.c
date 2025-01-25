#include <stdio.h>

int main(){
    int base = 1500, bonus_per_comp = 200, c_rate = 2;
    int num_comp;
    float sp_comp;

    printf("Enter the number of computers sold: ");
    scanf("%d", &num_comp);
    printf("Enter the sale price of a computer: ");
    scanf("%f", &sp_comp);

    float commission = c_rate * 0.01 * sp_comp * num_comp;
    int bonus = bonus_per_comp * num_comp;
    float salary = base + bonus + commission;

    printf("You earned a bonus of %d and a commission of %f\n", bonus, commission);
    printf("The gross slaray is %f\n", salary);
    return 0;
}