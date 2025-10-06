#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("test.txt", "w");
    fprintf(fp, "Hello File Handling!\n");
    fclose(fp);

    fp = fopen("test.txt", "r");
    while (fgets(str, 100, fp) != NULL)
        printf("%s", str);
    fclose(fp);

    return 0;
}
