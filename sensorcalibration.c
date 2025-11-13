#include <stdio.h>
int main() {
    float raw = 5.0, gain = 2.5;
    printf("Calibrated = %.2f", raw * gain);
    return 0;
}
