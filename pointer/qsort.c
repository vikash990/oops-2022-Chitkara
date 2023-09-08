#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    const int *x = (const int *)a;
    const int *y = (const int *)b;
    
    if (*x < *y) {
        return -1;
    } else if (*x > *y) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int arr[] = {5, 2, 9, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    qsort(arr, size, sizeof(int), compare);
    
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
