// 6. Swap two variables using and without using third variable
#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Using third variable
    temp = a;
    a = b;
    b = temp;
    printf("After swapping (using third variable): a = %d, b = %d\n", a, b);

    // Without using third variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping (without third variable): a = %d, b = %d\n", a, b);

    return 0;
}

