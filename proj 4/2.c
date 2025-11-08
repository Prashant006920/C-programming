// 2. Accessing elements of an array
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    for(i = 0; i < 5; i++) {
        printf("Element at index %d = %d\n", i, arr[i]);
    }

    return 0;
}

