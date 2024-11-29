//Assignment 4 Q25

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    int *ptr = arr;
    int max = *ptr; 

    // Traverse the array using the pointer
    for (i = 1; i < n; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i); 
        }
    }

    printf("The largest value in the array is: %d\n", max);

    return 0;
}
