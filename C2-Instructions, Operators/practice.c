#include <stdio.h>

// Solve practice problems
/*
	a. 5 * 2 - 2 * 3 >> 4
	b. 5 * 2 / 2 * 3 >> 8
	c. 5 * (2 / 2) * 3 >> 15
    d. 5 + 2 / 2 * 3 >> 8
*/

int main() {
    int a = 5 * 2 - 2 * 3;
    printf("%d \n", a);

    int b = 5 * 2 / 2 * 3;
    printf("%d \n", b);

    int c = 5 * (2 / 2) * 3;
    printf("%d \n", c);

    int d = 5 + 2 / 2 * 3;
    printf("%d \n", d);
    
    return 0;
}