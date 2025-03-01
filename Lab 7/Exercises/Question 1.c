#include <stdio.h>

int main(){
    float array[10];

    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++)
        scanf("%f", &array[i]);

    float min = array[0];
    float min2 = array[0];
    float max = array[0];
    float max2 = array[0];

    for(int i = 1; i < 10; i++){
        if(min > array[i]){
            min2 = min;
            min = array[i];
        }
        else if(min2 > array[i])
            min2 = array[i];
        else if(max < array[i]){
            max2 = max;
            max = array[i];
        }
        else if(max2 < array[i])
            max2 = array[i];
    }

    printf("The maximum element: %f\n", max);
    printf("The second maximum element: %f\n", max2);
    printf("The minimum element: %f\n", min);
    printf("The second minimum element: %f\n", min2);

    return 0;
}