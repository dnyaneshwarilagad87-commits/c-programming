#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int i, words = 1;
    printf("Enter sentence: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
            words++;
    }
    printf("Words = %d\n", words);
    return 0;
}
