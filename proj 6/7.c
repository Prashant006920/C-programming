// 7. Three integers stored in array of pointers
#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 15;
    int *arr[3];
    int i;

    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    for(i = 0; i < 3; i++) {
        printf("Value of element %d = %d\n", i, *arr[i]);
    }

    return 0;
}

