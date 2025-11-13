#include <stdio.h>
int main() {
    for(int i=0; i<10; i++)
        printf("%s\n", (i%2==0) ? "HIGH" : "LOW");
    return 0;
}
