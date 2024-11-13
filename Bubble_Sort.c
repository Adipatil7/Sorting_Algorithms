#include <stdio.h>

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the number of Elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d Integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    bubbleSort(a, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
