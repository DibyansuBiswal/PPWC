//Assignment 4 Q8

#include <stdio.h>

int main() {
   
    int a[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    
    
    printf("Index\tAddress\t\tValue\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t%p\t%d\n", i, (void*)&a[i], a[i]);
    }
    
    return 0;
}
