// 5. Calculate how many days you have lived
#include <stdio.h>

int main() {
    int birthYear, birthMonth, birthDay, currentYear, currentMonth, currentDay;
    int daysLived;

    printf("Enter your Birth Date (YYYY MM DD): ");
    scanf("%d %d %d", &birthYear, &birthMonth, &birthDay);

    printf("Enter Current Date (YYYY MM DD): ");
    scanf("%d %d %d", &currentYear, &currentMonth, &currentDay);

    daysLived = ((currentYear - birthYear) * 365) + ((currentMonth - birthMonth) * 30) + (currentDay - birthDay);

    printf("You have lived approximately %d days.\n", daysLived);
    return 0;
}

