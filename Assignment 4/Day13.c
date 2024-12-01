//Assignment 4 Q2

#include <stdio.h>

int main() {
    int a = 10;     
    int b = 20;     

    
    printf("Initial values:\n");
    printf("a = %d, Address of a: %p\n", a, (void*)&a);
    printf("b = %d, Address of b: %p\n", b, (void*)&b);

    
    int temp = a;
    a = b;
    b = temp;

    
    printf("\nAfter swapping:\n");
    printf("a = %d, Address of a: %p\n", a, (void*)&a);
    printf("b = %d, Address of b: %p\n", b, (void*)&b);

    
    if (&a == &a && &b == &b) {
        printf("\nThe addresses of variables a and b before and after swapping are equal.\n");
    } else {
        printf("\nThe addresses of variables a and b before and after swapping are not equal.\n");
    }

    return 0;
}
