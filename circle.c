#include <stdio.h>

// calculate are of circle with given radius

int main() {
    float radius;
    printf("Enter radius of circle: \n");
    scanf("%f", &radius);
    float area_circle = 3.14 * radius * radius;
    printf("Area of circle: %f", area_circle);

    return 0;
}