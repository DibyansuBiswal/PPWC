#include <stdio.h>

// Function to sort the array using Bubble Sort
void sortArray(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {
     
        int swapped = 0;  

        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
              
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; 
            }
        }

        if (!swapped)
            break;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int N = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, N);
    printf("Sorted array: \n");
    printArray(arr, N);
    return 0;
}