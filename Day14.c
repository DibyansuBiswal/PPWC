//Assignment 4 Q3

#include <stdio.h>

struct Values {
    float x;
    float y;
    float z;
};

int main() {
    struct Values v = {6.7, 1.2, 2.3}; 
    struct Values *p = &v; 


    printf("x = %.1f\n", p->x);
    printf("y = %.1f\n", p->y);
    printf("z = %.1f\n", p->z);

    return 0;
}
