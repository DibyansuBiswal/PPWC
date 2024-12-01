//Assignment 4 Q21

#include <stdio.h>

void arrange(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int n1, n2, n3, n4, n5, n6;


    printf("Enter SIX numbers separated by blanks> ");
    scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);

    arrange(&n1, &n2); arrange(&n3, &n4); arrange(&n5, &n6);
    arrange(&n1, &n3); arrange(&n2, &n4); arrange(&n3, &n5);
    arrange(&n2, &n3); arrange(&n4, &n5); arrange(&n1, &n2);
    arrange(&n4, &n6); arrange(&n5, &n6); arrange(&n3, &n4);

    printf("The numbers in ascending order are: %d %d %d %d %d %d\n",
           n1, n2, n3, n4, n5, n6);

    return 0;
}
