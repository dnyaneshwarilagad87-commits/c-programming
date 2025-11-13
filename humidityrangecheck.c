#include <stdio.h>
int main() {
    int h = 65;
    if(h < 40)
        printf("Low Humidity");
    else if(h > 70)
        printf("High Humidity");
    else
        printf("Normal Range");
    return 0;
}