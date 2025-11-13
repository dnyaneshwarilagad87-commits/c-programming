#include <stdio.h>
int main() {
    int l = 400;
    if(l < 200)
        printf("Low Light");
    else if(l < 500)
        printf("Medium Light");
    else
        printf("High Light");
    return 0;
}
