#include <stdio.h>

// area of a square

int main() {
    float side;
    printf("Enter the value of side of a square: \n");
    scanf("%f", &side);
    float area_square = side * side;
    printf("Are of the square is: %f", area_square);

    return 0;
}