// 13. Unformatted I/O string input
#include <stdio.h>

int main() {
    char name[30], address[50];
    int age;
    float weight, height;

    printf("Enter your name: ");
    gets(name);
    printf("Enter your address: ");
    gets(address);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your weight: ");
    scanf("%f", &weight);
    printf("Enter your height: ");
    scanf("%f", &height);

    printf("\nName: %s\nAddress: %s\nAge: %d\nWeight: %.2f\nHeight: %.2f\n", name, address, age, weight, height);
    return 0;
}

