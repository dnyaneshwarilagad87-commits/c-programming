#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)
        printf("You are eligible for Driving License.\n");
    else
        printf("You are not eligible for Driving License.\n");

    return 0;
}
