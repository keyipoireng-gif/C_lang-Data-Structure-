//Remove a vowels from a string

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str[200], result[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);   // read input with spaces

    while (str[i] != '\0') {
        char ch = tolower(str[i]);
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            result[j] = str[i];
            j++;
        }
        i++;
    }
    result[j] = '\0';

    printf("String without vowels: %s\n", result);

    return 0;
}

