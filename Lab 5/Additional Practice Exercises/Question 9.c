#include <stdio.h>

int main(){
    while(1) {
        int choice;
        float temperature;
        printf("Option 1: Convert from degree Celsius to deg. Fahrenheit.\n");
        printf("Option 2: Convert from deg. Fahrenheit to deg. Celsius.\n");
        printf("Option 3: Quit the program execution. (or any other invalid options).\n");
        printf("Select an option: ");
        scanf("%d", &choice);

        if(choice == 1){
            printf("Enter temperature in degree Celcius: ");
            scanf("%f", &temperature);

            if(temperature < -273.15){
                printf("Invalid temperature.\n");
                continue;
            }
            float faren = 9 * temperature / 5 + 32; 
            printf("%f\u00b0C is %f\u00b0F\n", temperature, faren);
        }
        else if(choice == 2){
            printf("Enter temperature in degree Celcius: ");
            scanf("%f", &temperature);

            if(temperature < -459.67){
                printf("Invalid temperature.\n");
                continue;
            }
            float cels = 5 * (temperature - 32) / 9; 
            printf("%f\u00b0F is %f\u00b0C\n", temperature, cels);
        }
        else
            break;
    }
    
    return 0;
}