// 4. Power of a number
#include <stdio.h>
#include <math.h>

int main() {
    double base, result;
    int exponent;

    printf("Enter base and exponent: ");
    scanf("%lf %d", &base, &exponent);

    result = pow(base, exponent);
    printf("%.2lf raised to %d = %.2lf\n", base, exponent, result);
    return 0;
}

