// 16. GCD (HCF) and LCM of two numbers
#include <stdio.h>

int main() {
    int a, b, x, y, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // Find GCD using Euclidean method
    while(y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;

    // Find LCM
    lcm = (a * b) / gcd;

    printf("GCD of %d and %d = %d\n", a, b, gcd);
    printf("LCM of %d and %d = %d\n", a, b, lcm);

    return 0;
}

