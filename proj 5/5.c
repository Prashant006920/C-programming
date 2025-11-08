// 5. Function with arguments and no return type
#include <stdio.h>

void printSum(int a, int b) {
    printf("Sum = %d\n", a + b);
}

int main() {
    int x = 5, y = 7;
    printSum(x, y);
    return 0;
}

