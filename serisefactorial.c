#include <stdio.h>

int main() {
    int n, i, j, fact;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Factorial Series:\n");
    for (i = 1; i <= n; i++) {
        fact = 1;
        for (j = 1; j <= i; j++)
            fact *= j;
        printf("%d ", fact);
    }
    return 0;
}
