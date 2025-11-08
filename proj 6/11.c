// 11. Function accepts pointer or array
#include <stdio.h>

void printArray(int *arr, int n) {
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr, 5); // passing array
    return 0;
}

