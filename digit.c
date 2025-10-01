#include <stdio.h>
int main() {
    char ch;
    scanf(" %c",&ch);
    if(ch>='0' && ch<='9')
        printf("Digit\n");
    else
        printf("Not Digit\n");
    return 0;
}
