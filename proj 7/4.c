// 4. Structure employee, 20 employees, average salary & age
#include <stdio.h>
#include <string.h>

struct Employee {
    char name[30];
    float salary;
    int age;
    char department[20];
};

int main() {
    struct Employee emp[20];
    int i, n;
    float totalSalary = 0;
    int totalAge = 0;

    printf("Enter number of employees (max 20): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter name, salary, age, department of employee %d:\n", i+1);
        scanf("%s", emp[i].name);
        scanf("%f", &emp[i].salary);
        scanf("%d", &emp[i].age);
        scanf("%s", emp[i].department);
        totalSalary += emp[i].salary;
        totalAge += emp[i].age;
    }

    printf("\nEmployee Records:\n");
    for(i = 0; i < n; i++) {
        printf("Name: %s, Salary: %.2f, Age: %d, Dept: %s\n", emp[i].name, emp[i].salary, emp[i].age, emp[i].department);
    }

    printf("\nAverage Salary: %.2f\n", totalSalary / n);
    printf("Average Age: %.2f\n", (float)totalAge / n);

    return 0;
}

