// 4. Read name & age, store in record.txt
#include <stdio.h>

int main() {
    FILE *fp = fopen("record.txt", "w");
    char name[50];
    int age;

    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s, Age: %d\n", name, age);
    fclose(fp);

    printf("Record saved to record.txt\n");
    return 0;
}

