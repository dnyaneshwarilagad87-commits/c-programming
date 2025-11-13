#include <stdio.h>
int main() {
    float raw = 24.8, offset = -0.5;
    printf("Corrected = %.2f", raw + offset);
    return 0;
}
