#include <stdio.h>

int main() {
    char character;
    char string[50];
    char sentence[100];
    scanf(" %c", &character);
    scanf(" %s", string);
    scanf(" %[^\n]s", sentence);
    printf("%c\n", character);
    printf("%s\n", string);
    printf("%s\n", sentence);
    return 0;
}
