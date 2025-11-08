// 3. Illustrate use of pointer array (compatible with Dev C++)
#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int *ptr[3];  // array of pointers
    int i;

    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;

    for(i = 0; i < 3; i++) {
        printf("Value of element %d = %d\n", i, *ptr[i]);
    }

    return 0;
}

