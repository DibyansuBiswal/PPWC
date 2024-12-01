//Assignment 3 Q5

#include <stdio.h>

int binary_srch(int arr[], int size, int target) {
    int bottom = 0;
    int top = size - 1;
    int middle;

    while (bottom <= top) {
        middle = (bottom + top) / 2;

        if (arr[middle] == target) {
            return middle;  
        } else if (arr[middle] > target) {
            top = middle - 1;  
        } else {
            bottom = middle + 1;  
        }
    }

    return -1;  
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    
    int index = binary_srch(arr, size, target);
    if (index != -1) {
        printf("Target found at index: %d\n", index);
    } else {
        printf("Target not found in the array.\n");
    }

    return 0;
}
