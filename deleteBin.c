#include <stdio.h>

int search(int arr[], int n, int high, int low, int key);

int deleteElement(int key, int arr[], int n) {
    int pos = search(arr, n, n - 1, 0, key);

    if (pos == -1) {
        printf("Element not found.\n");
        return n;
    }

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    return n - 1;
}

int main() {
    int arr[20] = {1, 3, 5, 7, 9, 10};
    int n = 6;
    int key = 5;

    printf("Before Deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    n = deleteElement(key, arr, n);

    printf("\nAfter Deletion of Element %d:\n", key);
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}

int search(int arr[], int n, int high, int low, int key) {
    if (high < low)
        return -1;

    int mid = (high + low) / 2;

    if (key == arr[mid])
        return mid;

    if (key > arr[mid])
        return search(arr, n, high, mid + 1, key);

    return search(arr, n, mid - 1, low, key);
}
