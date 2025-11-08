#include <stdio.h>

int main() {
    FILE *fin, *fodd, *feven;
    int n;

    fin = fopen("data.txt", "r");   // input file with N integers
    fodd = fopen("odd.txt", "w");   // file for odd numbers
    feven = fopen("even.txt", "w"); // file for even numbers

    if (fin == NULL || fodd == NULL || feven == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    while (fscanf(fin, "%d", &n) != EOF) {  // read integers until end of file
        if (n % 2 == 0)
            fprintf(feven, "%d\n", n);      // write even number
        else
            fprintf(fodd, "%d\n", n);       // write odd number
    }

    fclose(fin);
    fclose(fodd);
    fclose(feven);

    printf("Odd and even numbers saved to odd.txt and even.txt.\n");
    return 0;
}

