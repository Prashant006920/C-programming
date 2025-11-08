// 2. Illustrate use of double pointer
#include <stdio.h>

int main() {
    int x = 20;
    int *p = &x;
    int **pp = &p;

    printf("Value of x = %d\n", x);
    printf("Value via single pointer = %d\n", *p);
    printf("Value via double pointer = %d\n", **pp);

    return 0;
}

