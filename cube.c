#include <stdio.h>

// Calculate cube of given number

int main() {
    int number;
    printf("Enter the Number: \n");
    scanf("%d", &number);
    int cube = number * number * number;
    printf("Cube is: %d", cube);
    return 0;
}