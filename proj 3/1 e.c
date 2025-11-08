#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {
        // Print descending numbers
        for(j = i; j >= 1; j--) {
            printf("%d\t", j);
        }
        // Print ascending numbers starting from 2
        for(j = 2; j <= i; j++) {
            printf("%d\t", j);
        }
        printf("\n");
    }

    return 0;
}

