// 12. Read strings with and without blank space
#include <stdio.h>

int main() {
    char str1[50], str2[50];

    printf("Enter string without blank space: ");
    scanf("%s", str1);

    getchar(); // consume newline
    printf("Enter string with blank space: ");
    fgets(str2, sizeof(str2), stdin);

    printf("String without space: %s\n", str1);
    printf("String with space: %s", str2);

    return 0;
}

