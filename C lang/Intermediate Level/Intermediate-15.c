//Replace all spaces in string with underscores

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);   // read input with spaces

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '_';
        }
        i++;
    }

    printf("Modified string: %s\n", str);

    return 0;
}

