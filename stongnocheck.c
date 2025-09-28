#include <stdio.h>

int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int n, orig, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    orig = n;

    while (n != 0) {
        rem = n % 10;
        sum += factorial(rem);
        n /= 10;
    }

    if (sum == orig)
        printf("%d is a Strong number\n", orig);
    else
        printf("%d is not a Strong number\n", orig);

    return 0;
}
