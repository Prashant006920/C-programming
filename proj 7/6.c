// 6. Nested structure demonstration
#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[30];
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;

    printf("Enter employee name and salary: ");
    scanf("%s", emp.name);
    scanf("%f", &emp.salary);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    printf("\nEmployee Details:\n");
    printf("Name: %s\nSalary: %.2f\nJoining Date: %02d-%02d-%04d\n", emp.name, emp.salary,
           emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}

