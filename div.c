#include <stdio.h>
int main() {
    int a, b;
    float div;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(b != 0) {
        div = (float)a / b;
        printf("Division = %.2f\n", div);
    } else {
        printf("Division by zero not possible!\n");
    }
    return 0;
}
