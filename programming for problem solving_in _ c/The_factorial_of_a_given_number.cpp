#include <stdio.h>

int main() {
    int number, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    int i = 1;
    while (i <= number) {
        factorial *= i;
        i++;
    }

    printf("The factorial of %d is %d\n", number, factorial);

    return 0;
}

