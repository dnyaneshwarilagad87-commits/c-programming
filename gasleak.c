#include <stdio.h>
int main() {
    int gas = 900;
    if(gas > 800)
        printf("Leak Alert!");
    else
        printf("Safe");
    return 0;
}