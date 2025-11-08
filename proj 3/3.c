// 3. Square if odd, cube if even (1-20)
#include <stdio.h>
#include <math.h>

int main() {
    int i;
    for(i = 1; i <= 20; i++) {
        if(i % 2 == 0)
            printf("%d^3 = %d\n", i, i*i*i);
        else
            printf("%d^2 = %d\n", i, i*i);
    }
    return 0;
}

