// 7. Sort employees by name (ascending)
#include <stdio.h>
#include <string.h>

struct Employee {
    char name[30];
    char address[50];
    float salary;
};

int main() {
    struct Employee emp[10], temp;
    int i, j, n;

    printf("Enter number of employees (max 10): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter name, address, salary of employee %d:\n", i+1);
        scanf("%s", emp[i].name);
        scanf("%s", emp[i].address);
        scanf("%f", &emp[i].salary);
    }

    // Bubble sort by name
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(strcmp(emp[i].name, emp[j].name) > 0) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }

    printf("\nEmployees sorted by name:\n");
    for(i = 0; i < n; i++) {
        printf("Name: %s, Address: %s, Salary: %.2f\n", emp[i].name, emp[i].address, emp[i].salary);
    }

    return 0;
}

