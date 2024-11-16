//Assignment 4 Q4

#include <stdio.h>

int main() {
    int x = 89; 
    int *p1, *p2, *p3; 

    
    p1 = &x;
    p2 = &x;
    p3 = &x;


    printf("Value of x using p1: %d\n", *p1);


    *p3 = 100;

    
    printf("Updated value of x: %d\n", x);

    return 0;
}
