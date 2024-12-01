//Assignment 4 Q5

#include <stdio.h>


struct data {
    int a;
    int b;
    int c;
};

int main() {
    
    struct data obj = {12, 25, 18};

    
    struct data *ptr = &obj;

    
    ptr->a += 10;
    ptr->b += 10;
    ptr->c += 10;

    
    printf("Updated values:\na = %d\nb = %d\nc = %d\n", ptr->a, ptr->b, ptr->c);

    return 0;
}
