#include <stdio.h>
int main() {
    FILE *file;
    char ch;
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Unable to open file for writing.\n");
        return 1;
    }
    while (1) {
        ch = getchar();
        if (ch == '@') {
            break;
        }
        fputc(ch, file);
    }
    fclose(file);

    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Unable to open file for reading.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '@') {
            break;
        }
        putchar(ch);
    }
    fclose(file);
    return 0;
}
