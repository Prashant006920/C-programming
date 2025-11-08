// 3. Structure student, read/display 5 students
#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int roll;
    float marks;
    char remarks[50];
};

int main() {
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("Enter name, roll, marks, remarks of student %d:\n", i+1);
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%f", &s[i].marks);
        scanf("%s", s[i].remarks);
    }

    printf("\nStudent Records:\n");
    for(i = 0; i < 5; i++) {
        printf("Name: %s, Roll: %d, Marks: %.2f, Remarks: %s\n", s[i].name, s[i].roll, s[i].marks, s[i].remarks);
    }

    return 0;
}

