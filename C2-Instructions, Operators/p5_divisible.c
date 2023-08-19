#include <stdio.h>

// Check if a number is divisible by 2 or not
// even -> 1
// odd -> 0

int main() {
    printf("......Checking if a number is divisible by 2 or not...... \n\n");
    printf("Enter the number: \n");
    int number;
    scanf("%d", &number);
    printf("%d", number % 2 == 0);

    return 0;
}