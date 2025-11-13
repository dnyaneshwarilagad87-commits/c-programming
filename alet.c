#include <stdio.h>
float avg(float s[], int n) {
    float sum = 0;
    for(int i=0;i<n;i++) sum += s[i];
    return sum/n;
}
int main() {
    float s[5]={25.5,26.0,27.8,28.2,29.0};
    float a = avg(s,5);
    if(a > 28)
        printf("Warning: High Temp Avg = %.2f", a);
    else
        printf("Normal Avg = %.2f", a);
}
