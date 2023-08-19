#include <stdio.h>

/*
Print 1(true) or 0(false) for following statements:
	a. If it's sunday & it's snowing -> true
	b. If it's monday or it's raining -> true
	c. if a number is greater than 9 & less than 100 -> true
(2 digit number)
*/

// int main() {
//     int isSunday = 1;
//     int isSnowing = 1;
//     printf("%d \n", isSunday && isSnowing);
//     return 0;
// }

// int main() {
//     int isMonday = 0;
//     int isRaining = 1;
//     printf("%d \n", isMonday || isRaining);
//     return 0;
// }

int main() {
    int number;
    printf("Enter a Number: \n");
    scanf("%d", &number);
    printf("%d \n", number > 9 && number < 100);
    return 0;
}