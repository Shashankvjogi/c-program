#include <stdio.h>

double calculateArea(double radius) {
    const double PI = 3.14159;
    return PI * radius * radius;
}

int main() {
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);


    area = calculateArea(radius);


    printf("Area of the circle with radius %.2f units is: %.2f square units\n", radius, area);
    return 0;
}
