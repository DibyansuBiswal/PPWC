//Assignment 4 Q6

#include <stdio.h>

int main() {
    
    int a = 12, b = 52, c = 8;

    
    int *ptr1 = &a;
    int *ptr2 = &b;
    int *ptr3 = &c;

    
    *ptr1 += 10;
    *ptr2 += 10; 
    *ptr3 += 10; 


    printf("Updated values:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}
