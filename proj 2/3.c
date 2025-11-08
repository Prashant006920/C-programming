#include <stdio.h>

int main() {
    float sales, commission;

    printf("Enter total sales: ");
    scanf("%f", &sales);

    if (sales < 5000)
        commission = sales * 0.01;
    else if (sales <= 8000)
        commission = sales * 0.03;
    else if (sales <= 11000)
        commission = sales * 0.05;
    else
        commission = sales * 0.10;

    printf("Commission Amount = Rs. %.2f\n", commission);

    return 0;
}

