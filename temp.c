#include <stdio.h>
int main() {
    int temp;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &temp);

    if(temp >= 30)
        printf("Hot Day\n");
    else
        printf("Cold Day\n");

    return 0;
}
