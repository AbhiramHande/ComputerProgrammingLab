#include <stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    age >= 18 ? printf("You can vote.\n") : printf("You can't vote.\n");
    return 0;
}