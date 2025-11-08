// 5. Copy contents of one file to another
#include <stdio.h>

int main() {
    FILE *src = fopen("source.txt", "r");
    FILE *dest = fopen("destination.txt", "w");
    char ch;

    if(src == NULL || dest == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    while((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);
    printf("File copied successfully.\n");
    return 0;
}

