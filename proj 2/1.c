#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5, total, percentage;

    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total / 5;

    printf("Percentage = %.2f%%\n", percentage);

    if (percentage >= 80)
        printf("Division: Distinction\n");
    else if (percentage >= 60)
        printf("Division: First Division\n");
    else if (percentage >= 40)
        printf("Division: Pass\n");
    else
        printf("Division: Fail\n");

    return 0;
}

