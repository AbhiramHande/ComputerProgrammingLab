#include <stdio.h>
#include "circle.h"

int main(){
    double radius, area, perimeter;
    printf("Enter the radius of a circle: ");
    scanf("%lf", &radius);
    circleData(radius, &area, &perimeter);
    printf("Area of the circle is %g.\n", area);
    printf("Perimeter of the circle is %g.\n", perimeter);
    return 0;
}