// 8. Evaluate expressions and analyze output
#include <stdio.h>

int main() {
    int x, z, y;

    // a
    x = 2; z = 4;
    y = x++ + ++x;
    printf("a. y = %d\n", y);

    // b
    x = 2; z = 4;
    y = ++x + ++x;
    printf("b. y = %d\n", y);

    // c
    x = 2; z = 4;
    y = ++x + ++x + ++x;
    printf("c. y = %d\n", y);

    // d
    x = 2; z = 4;
    y = x > z;
    printf("d. y = %d\n", y);

    // e
    x = 2; z = 4;
    y = x > z ? x : z;
    printf("e. y = %d\n", y);

    // f
    x = 2; z = 4;
    y = x & z;
    printf("f. y = %d\n", y);

    // g
    x = 2; z = 4;
    y = (x >> 2) + (z << 1);
    printf("g. y = %d\n", y);

    return 0;
}

