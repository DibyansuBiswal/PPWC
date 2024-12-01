//Assignment 4 Q11

#include <stdio.h>

int main() {
    
    int a[] = {120, 502, 118, 188, 106, 447};


    int *ptr = a;

    
    for (int i = 0; i < 6; i++) {
        printf("a[%d] = %d\n", i, *(ptr + i));
    }

    return 0;
}
