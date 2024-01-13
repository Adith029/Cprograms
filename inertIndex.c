#include <stdio.h>

int insertAtIndex(int key, int n, int arr[], int capacity, int index) {
    if (n >= capacity || index < 0 || index > n) {
        printf("Invalid index for insertion.\n");
        return n;
    }

    for (int i = n - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    arr[index] = key;

    return n + 1;
}

int main() {
    int arr[20] = {1, 3, 5, 7, 9, 10};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 6;
    int key = 4;
    int insertionIndex = 4;

    printf("Before Insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    n = insertAtIndex(key, n, arr, capacity, insertionIndex);

    printf("\nAfter Insertion at Index %d:\n", insertionIndex);
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}
