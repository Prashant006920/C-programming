#include <stdio.h>

int main() {
    FILE *fp;
    int n, i, id;
    char name[30], post[30];
    float salary;

    fp = fopen("employees.txt", "w");  // open file in write mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEmployee %d ID: ", i + 1);
        scanf("%d", &id);
        printf("Name: ");
        scanf("%s", name);
        printf("Post: ");
        scanf("%s", post);
        printf("Salary: ");
        scanf("%f", &salary);

        fprintf(fp, "%d %s %s %.2f\n", id, name, post, salary);  // write to file
    }

    fclose(fp);  // close the file
    printf("Data saved to employees.txt successfully.\n");

    return 0;
}

