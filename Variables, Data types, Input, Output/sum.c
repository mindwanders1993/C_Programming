# include<stdio.h>

// this will take two number inputs and returns the sum of numbers

int main() {
    int a, b;
    printf("Enter value of a: \t");
    scanf("%d", &a);

    printf("Enter value of b: \t");
    scanf("%d", &b);

    int sum = a + b;
    printf("Sum of a and b is: %d", sum);

    return 0;
}