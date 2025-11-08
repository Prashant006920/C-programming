#include <stdio.h>

int main() {
    int i, j, space;

    for(i = 1; i <= 5; i++) {
        // Print spaces
        for(space = 5; space > i; space--) {
            printf("  ");
        }
        // Print numbers
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

