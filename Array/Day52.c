#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

bool isSubset(int a[], int aSize, int b[], int bSize) {
    qsort(a, aSize, sizeof(int), compare);
    qsort(b, bSize, sizeof(int), compare);

    int i = 0, j = 0;

    // Traverse both arrays using two pointers
    while (i < aSize && j < bSize) {
        if (a[i] < b[j]) {
            // Element in a is smaller, move to the next element in a
            i++;
        } else if (a[i] == b[j]) {
            // Element found in both arrays, move to the next element in both arrays
            i++;
            j++;
        } else {
            // Element in b not found in a, not a subset
            return false;
        }
    }

    // If we have traversed all elements in b, it is a subset
    return j == bSize;
}

int main() {
    int a[] = {11, 1, 13, 21, 3, 7};
    int b[] = {11, 3, 7, 1};
    int aSize = sizeof(a) / sizeof(a[0]);
    int bSize = sizeof(b) / sizeof(b[0]);

    if (isSubset(a, aSize, b, bSize)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}