// 3. Write text one character at a time until Enter
#include <stdio.h>

int main() {
    FILE *fp = fopen("textfile.txt", "w");
    char ch;

    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text (press Enter to stop):\n");
    while(1) {
        ch = getchar();
        if(ch == '\n') break;
        fputc(ch, fp);
    }

    fclose(fp);
    printf("Text written to textfile.txt\n");
    return 0;
}

