// 5. Bank customers: find highest and lowest balance
#include <stdio.h>
#include <string.h>

struct Customer {
    char name[30];
    long account_no;
    float balance;
};

int main() {
    struct Customer c[10];
    int i, n;
    int highIndex = 0, lowIndex = 0;

    printf("Enter number of customers (max 10): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter name, account_no, balance for customer %d:\n", i+1);
        scanf("%s", c[i].name);
        scanf("%ld", &c[i].account_no);
        scanf("%f", &c[i].balance);
    }

    for(i = 1; i < n; i++) {
        if(c[i].balance > c[highIndex].balance)
            highIndex = i;
        if(c[i].balance < c[lowIndex].balance)
            lowIndex = i;
    }

    printf("\nCustomer with highest balance: %s, Acc: %ld, Balance: %.2f\n", c[highIndex].name, c[highIndex].account_no, c[highIndex].balance);
    printf("Customer with lowest balance: %s, Acc: %ld, Balance: %.2f\n", c[lowIndex].name, c[lowIndex].account_no, c[lowIndex].balance);

    return 0;
}

