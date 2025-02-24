#include <stdio.h>

int main(){
    int num_of_day;
    printf("Enter the day: ");
    scanf("%d", &num_of_day);

    switch (num_of_day)
    {
    case 1:
        printf("Monday.\n");
        break;

    case 2:
        printf("Tuesday.\n");
        break;
    
    case 3:
        printf("Wednesday.\n");
        break;
    
    case 4:
        printf("Thursday.\n");
        break;

    case 5:
        printf("Friday.\n");
        break;
    
    case 6:
        printf("Saturday.\n");
        break;
    
    case 7:
        printf("Sunday.\n");
        break;
    
    default:
        printf("Enter values between 1 and 7");
        break;
    }

    return 0;
}