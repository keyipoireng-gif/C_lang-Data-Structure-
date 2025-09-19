//Count words in a sentence (using string functions)

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200];
    int i = 0, words = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);   // read full sentence

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            words++;
        }
        i++;
    }

    // words = spaces + 1 (if not empty)
    if (strlen(str) > 0) {
        words++;
    }

    printf("Total words = %d\n", words);

    return 0;
}

