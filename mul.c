#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a * b > 0)
        printf("Product is Positive\n");
    else if(a * b < 0)
        printf("Product is Negative\n");
    else
        printf("Product is Zero\n");

    return 0;
}
s