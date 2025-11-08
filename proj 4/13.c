// 13. Find length of string
#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if exists
    str[strcspn(str, "\n")] = 0;

    printf("Length of string: %lu\n", strlen(str));
    return 0;
}

