#include <stdio.h>
float avg(float a[]) {
    return (a[0]+a[1]+a[2])/3;
}
int main() {
    float s[3]={10.5,12.2,11.8};
    printf("Average = %.2f", avg(s));
}
