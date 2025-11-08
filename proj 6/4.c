// 4. Illustrate pointer arithmetic (compatible with Dev C++)
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;
    int i;

    for(i = 0; i < 5; i++) {
        printf("Value at p+%d = %d\n", i, *(p + i));
    }

    return 0;
}

