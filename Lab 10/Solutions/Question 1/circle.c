#include "circle.h"
#define PI 3.14159

void circleData(double radius, double* area, double* perimeter){
    *area = PI * radius * radius;
    *perimeter = 2 * PI * radius;
    return;
}