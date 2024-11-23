//Assignment 4 Q10

#include <stdio.h>

int main() {
    
    int a[] = {120, 502, 118, 188, 106, 447};

    
    int *ptr1 = &a[0];
    int *ptr2 = &a[1];
    int *ptr3 = &a[2];
    int *ptr4 = &a[3];
    int *ptr5 = &a[4];
    int *ptr6 = &a[5];

    
    printf("Using pointers to display array elements:\n");
    printf("ptr1: %d\n", *ptr1);
    printf("ptr2: %d\n", *ptr2);
    printf("ptr3: %d\n", *ptr3);
    printf("ptr4: %d\n", *ptr4);
    printf("ptr5: %d\n", *ptr5);
    printf("ptr6: %d\n", *ptr6);

    return 0;
}
