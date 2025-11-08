// 5. Area and circumference of a circle
#include <stdio.h>
#define PI 3.1416

int main() {
    float r, area, circumference;
    printf("Enter radius of circle: ");
    scanf("%f", &r);

    area = PI * r * r;
    circumference = 2 * PI * r;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);
    return 0;
}

