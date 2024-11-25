//Assignment 4 Q12

#include <stdio.h>

int main() {
    
    int a[] = {120, 502, 118, 188, 106, 447};

    
    int *ptr = a; 


    for (int i = 0; i < 6; i++) {
        printf("a[%d] = %d\n", i, *(ptr + i));
    }

    return 0;
}
