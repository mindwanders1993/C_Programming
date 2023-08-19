#include <stdio.h>

//  check logical operators

int main() {
    // AND operator &&
    printf("%d \n", 4 > 3 && 5 > 2);
    printf("%d \n", 2 > 3 && 5 > 2);
    // OR operator ||
    printf("%d \n", 4 > 3 || 5 > 2);
    printf("%d \n", 2 > 3 || 5 > 2);
    // NOT operator !
    printf("%d \n", !(5 > 2));
    printf("%d \n", !((5 > 2) && (3 > 4)));
    return 0;
}