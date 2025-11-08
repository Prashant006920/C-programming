// 2. Append text to college.txt
#include <stdio.h>

int main() {
    FILE *fp = fopen("college.txt", "a"); // append mode
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "I study into BernHardt college, Bafal\n");
    fclose(fp);

    printf("Text appended to college.txt\n");
    return 0;
}

