#include <stdio.h>
int main() {
    char str[200];
    int words = 1;
    printf("Enter a sentence: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
            words++;
    }
    printf("Words = %d\n", words);
    return 0;
}
