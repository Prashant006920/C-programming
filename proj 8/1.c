// 1. Write "I study BCA" to bca.txt in write mode
#include <stdio.h>

int main() {
    FILE *fp = fopen("bca.txt", "w"); // write mode
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "I study BCA");
    fclose(fp);

    printf("Text written to bca.txt\n");
    return 0;
}

