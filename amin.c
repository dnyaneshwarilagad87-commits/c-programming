#include <stdio.h>
int main() {
    int n, arr[100], min;
    printf("Enter size of array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];

    printf("Minimum = %d\n", min);
    return 0;
}
