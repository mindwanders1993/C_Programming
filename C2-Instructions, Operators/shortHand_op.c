#include <stdio.h>

// Short hand operator
int main() {
    int a = 1;
    int b = 4;
    // a = a + b;
    // a += b;         // a = a + b
    // a -= b;         // a = a - b
    // a *= b;         // a = a * b
    // a /= b;         // a = a / b
    a %= b;         // a = a % b
    printf("%d \n", a);
    return 0;
}