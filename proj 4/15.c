// 15. Convert lowercase to uppercase and vice versa
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[50];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    for(i = 0; str[i] != '\0'; i++) {
        if(islower(str[i]))
            str[i] = toupper(str[i]);
        else if(isupper(str[i]))
            str[i] = tolower(str[i]);
    }

    printf("Converted string: %s\n", str);
    return 0;
}

