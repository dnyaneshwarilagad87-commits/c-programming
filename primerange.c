#include <stdio.h>

int main() {
    int low, high, i, flag;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);

    while (low < high) {
        flag = 0;
        if (low <= 1) {
            ++low;
            continue;
