// C program to find the occurrence of given
// target using linear search

#include <stdio.h>

int countFreq(int arr[], int n, int target) {
    int res = 0;
    for (int i = 0; i < n; i++) {

        if (arr[i] == target)
            res++;
    }
  
    return res;
}

int main() {
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8};
    int target = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
  
    printf("%d", countFreq(arr, n, target));
    return 0;
}