#include <stdio.h>

int isPrime(int number) {
    if (number <= 1)
        return 0;

    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Prime numbers from 1 to %d are: ", N);

    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

