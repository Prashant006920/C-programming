// 2. Find greater number using return function
#include <stdio.h>

int greater(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Greater number = %d\n", greater(x, y));
    return 0;
}

