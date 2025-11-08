// 10. Check multiples and divisibility
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 5 == 0)
        printf("Number is multiple of 5\n");
    else
        printf("Number is not multiple of 5\n");

    if (n % 7 == 0 && n % 11 != 0)
        printf("Number is divisible by 7 but not by 11\n");
    else
        printf("Condition not satisfied\n");

    return 0;
}

