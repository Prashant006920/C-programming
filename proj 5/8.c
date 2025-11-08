// 8. Find minimum in array using function
#include <stdio.h>

int findMin(int arr[], int n) {
    int i, min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < min) min = arr[i];
    }
    return min;
}

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Minimum value = %d\n", findMin(arr, n));
    return 0;
}

