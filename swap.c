#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter A: ");
    scanf("%d", &a);
     printf("Enter B: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a=%d, b=%d", a, b);
    return 0;

    
}
