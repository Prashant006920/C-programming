// 7. Price and stock of 5 bulbs, calculate total price
#include <stdio.h>

int main() {
    float price[5];
    int stock[5];
    int i;
    float total = 0;

    for(i = 0; i < 5; i++) {
        printf("Enter price of bulb %d: ", i+1);
        scanf("%f", &price[i]);
        printf("Enter stock of bulb %d: ", i+1);
        scanf("%d", &stock[i]);
        total += price[i] * stock[i];
    }

    printf("Total price = %.2f\n", total);
    return 0;
}

