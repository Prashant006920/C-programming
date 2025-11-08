// 3. Read 10 float numbers and display
#include <stdio.h>

int main() {
    float arr[10];
    int i;

    printf("Enter 10 float numbers:\n");
    for(i = 0; i < 10; i++)
        scanf("%f", &arr[i]);

    printf("You entered:\n");
    for(i = 0; i < 10; i++)
        printf("%.2f ", arr[i]);

    printf("\n");
    return 0;
}

