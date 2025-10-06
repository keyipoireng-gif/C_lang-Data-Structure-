#include <stdio.h>

int main() {
    FILE *f1, *f2;
    char c;

    f1 = fopen("source.txt", "r");
    f2 = fopen("dest.txt", "a");

    while ((c = fgetc(f1)) != EOF)
        fputc(c, f2);

    fclose(f1);
    fclose(f2);
    return 0;
}
