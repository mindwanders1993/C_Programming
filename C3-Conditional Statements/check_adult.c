#include <stdio.h>

int main() {
    int age;
    printf("Enter Age: \n");
    scanf("%d", &age);
    if(age > 18) {
        printf("Adult \n");
        printf("they can vote \n");
        printf("they can drive \n"); 
    }
    else {
        printf("Not Adult \n");
    }

    printf("Adult check done!");
    return 0;
}