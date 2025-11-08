// 9. Perform operation using operator from user
#include <stdio.h>

int main() {
    float x, y, result;
    char ch;

    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);

    fflush(stdin); // clear buffer
    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &ch);

    switch(ch) {
        case '+': result = x + y; break;
        case '-': result = x - y; break;
        case '*': result = x * y; break;
        case '/': result = x / y; break;
        default: printf("Invalid operator\n"); return 0;
    }
    printf("Result = %.2f\n", result);
    return 0;
}


