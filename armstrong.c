#include <stdio.h>
int main() {
    int n, orig, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    orig = n;
    while (n != 0) {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }
    if (sum == orig)
        printf("%d is an Armstrong number\n", orig);
    else
        printf("%d is not an Armstrong number\n", orig);
    return 0;
}
