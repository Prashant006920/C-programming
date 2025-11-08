// 6. Demonstrate NULL pointer
#include <stdio.h>

int main() {
    int *p = NULL;

    if(p == NULL)
        printf("Pointer is NULL\n");
    else
        printf("Pointer is not NULL\n");

    return 0;
}

