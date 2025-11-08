#include <stdio.h>

int main() {
    char marital, gender;
    float income, tax = 0;

    printf("Enter marital status (M for married / U for unmarried): ");
    scanf(" %c", &marital);
    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);
    printf("Enter annual income: ");
    scanf("%f", &income);

    if (marital == 'M' || marital == 'm') {  // Married
        if (income <= 450000)
            tax = income * 0.01;
        else if (income <= 550000)
            tax = (450000 * 0.01) + ((income - 450000) * 0.10);
        else if (income <= 750000)
            tax = (450000 * 0.01) + (100000 * 0.10) + ((income - 550000) * 0.20);
        else if (income <= 1300000)
            tax = (450000 * 0.01) + (100000 * 0.10) + (200000 * 0.20) + ((income - 750000) * 0.30);
        else
            tax = (450000 * 0.01) + (100000 * 0.10) + (200000 * 0.20) + (550000 * 0.30) + ((income - 1300000) * 0.35);
    } 
    else if (marital == 'U' || marital == 'u') {  // Unmarried
        if (income <= 400000)
            tax = income * 0.01;
        else if (income <= 500000)
            tax = (400000 * 0.01) + ((income - 400000) * 0.10);
        else if (income <= 750000)
            tax = (400000 * 0.01) + (100000 * 0.10) + ((income - 500000) * 0.20);
        else if (income <= 1300000)
            tax = (400000 * 0.01) + (100000 * 0.10) + (250000 * 0.20) + ((income - 750000) * 0.30);
        else
            tax = (400000 * 0.01) + (100000 * 0.10) + (250000 * 0.20) + (550000 * 0.30) + ((income - 1300000) * 0.35);
    } 
    else {
        printf("Invalid marital status input.\n");
        return 0;
    }

    // Apply 10% discount for female
    if (gender == 'F' || gender == 'f')
        tax = tax - (tax * 0.10);

    printf("Total Tax = Rs. %.2f\n", tax);

    return 0;
}

