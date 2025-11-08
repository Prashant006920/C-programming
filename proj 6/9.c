// 9. Passing to pointer function
#include <stdio.h>

void increment(int *p) {
    (*p)++;
}

int main() {
    int x = 5;
    increment(&x);
    printf("Value after increment = %d\n", x);
    return 0;
}

