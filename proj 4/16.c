// 16. Read names of n students and sort alphabetically
#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    char temp[50];
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    char names[n][50];

    for(i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", names[i]);
    }

    // Bubble sort names alphabetically
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nNames in alphabetical order:\n");
    for(i = 0; i < n; i++)
        printf("%s\n", names[i]);

    return 0;
}

