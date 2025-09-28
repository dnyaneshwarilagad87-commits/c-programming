#include <stdio.h>
int main() {
    int n, orig, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    orig = n;
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (orig == rev)
        printf("%d is a Palindrome\n", orig);
    else
        printf("%d is not a Palindrome\n", orig);
    return 0;
}
