#include <stdio.h>

int main() {
    int n, i, result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {
        result -= i;   // subtracting even numbers
    }

    printf("Subtraction of even numbers from 1 to %d is: %d\n", n, result);

    return 0;
}