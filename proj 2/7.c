// 7. Calculate compound interest
#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, ci;

    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &p, &r, &t);

    ci = p * (pow((1 + r / 100), t) - 1);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}

