#include <stdio.h>

// Calculate perimeter of a rectangle

int main() {
    float length;
    float width;
    printf("Enter Length of the Rectangle: \n");
    scanf("%f", &length);
    printf("Enter Width of the Rectangle: \n");
    scanf("%f", &width);
    float perimeter_rectangle = 2 * (length + width);
    printf("Perimeter of the Rectangle: %f", perimeter_rectangle);

    return 0;
}