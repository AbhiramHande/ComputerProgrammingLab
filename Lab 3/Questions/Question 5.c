#include <stdio.h>

int main(){
    int vel, acc, time;
    float dist;
    printf("Enter the initial velocity: ");
    scanf("%d", &vel);
    printf("Enter the acceleration: ");
    scanf("%d", &acc);
    printf("Enter the time travelled by the vehicle: ");
    scanf("%d", &time);

    float temp1 = vel * time;
    float temp2 = 0.5 * acc * time * time;
    dist = temp1 + temp2;

    printf("Total distance travelled is: %.2f\n", dist);
    return 0;
}