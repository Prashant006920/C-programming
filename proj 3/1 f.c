#include <stdio.h>

int main() {
    int i, j, space;

    for(i = 1; i <= 5; i++) {
        // Print spaces
        for(space = 5; space > i; space--) {
            printf("  ");
        }
        // Print numbers in pyramid
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}

