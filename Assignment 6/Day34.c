//Assignment 6 Q12

//Write a program to find the sum of an array elements using recursion.


#include <stdio.h>

int sumArray(int arr[], int size) {
    if (size == 0) {
        return 0; 
    }
    return arr[size - 1] + sumArray(arr, size - 1); 
}

int main() {
    int n;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = sumArray(arr, n);

    printf("The sum of the array elements is: %d\n", result);
    return 0;
}
