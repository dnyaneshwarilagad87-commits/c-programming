#include <stdio.h>
int main() {
    int low, high, i, j, flag;
    printf("Enter range: ");
    scanf("%d %d", &low, &high);
    for (i = low; i <= high; i++) {
        flag = 1;
        if (i < 2) continue;
        for (j = 2; j <= i/2; j++) {
            if (i % j == 0) { flag = 0; break; }
        }
        if (flag) printf("%d ", i);
    }
    return 0;
}
