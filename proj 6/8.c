// 8. Array of pointers to characters (list of strings)
#include <stdio.h>

int main() {
    char *str[3];
    int i;

    str[0] = "Apple";
    str[1] = "Banana";
    str[2] = "Cherry";

    for(i = 0; i < 3; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}

