//Assignment 4 Q9

#include <stdio.h>

int main() {
    
    int intArray[] = {10, 13, 20, 33, 44};
    float floatArray[] = {10.2, 13.3, 20.0, 33.3, 45.3, 89.9};
    
    
    int *intPtr = intArray;

    
    float *floatPtr = floatArray;


    printf("Integer Array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Value: %d, Address: %p\n", *(intPtr + i), (void*)(intPtr + i));
    }

    
    printf("\nFloat Array:\n");
    for (int i = 0; i < 6; i++) {
        printf("Value: %.1f, Address: %p\n", *(floatPtr + i), (void*)(floatPtr + i));
    }

    return 0;
}
