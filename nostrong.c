#include <stdio.h>

int main() {
    int num, temp, rem, fact, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    while (num > 0) {
        rem = num % 10;
        fact = 1;
        for (i = 1; i <= rem; i++)
            fact *= i;
        sum += fact;
        num /= 10;
    }

    if (sum == temp)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}
