//Count vowels and consonants in a string

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str[200];
    int i = 0, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // reads string with spaces

    while (str[i] != '\0') {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}

