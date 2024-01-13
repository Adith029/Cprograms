#include <stdio.h>

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

int main() {
    int arr[] = {1, 3, 5, 7, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 7;
    int find = search(arr, n, n - 1, 0, key);

    if (find == -1) {
        printf("Element Not found\n");
    } else {
        printf("Element Found at %d\n", find + 1);
    }
    return 0;
}
