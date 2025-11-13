#include <stdio.h>
int main() {
    float t = 100.5;
    if(t > 90)
        printf("Warning: Overheat!");
    else
        printf("Safe Temperature");
    return 0;
}
