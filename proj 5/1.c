// 1. Sum of two integers using function call
#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("Sum = %d\n", sum(x, y));
    return 0;
}

