#include <stdio.h>

int partition(int a[], int l, int high) {
    int piv = a[high];
    int i = l - 1;
    for (int j = l; j < high; j++) {
        if (a[j] < piv) {
            i++;
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    int t = a[i + 1];
    a[i + 1] = a[high];
    a[high] = t;
    return i + 1;
}

void quickSort(int a[], int l, int high) {
    if (l < high) {
        int pi = partition(a, l, high);
        quickSort(a, l, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    quickSort(a, 0, n - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
