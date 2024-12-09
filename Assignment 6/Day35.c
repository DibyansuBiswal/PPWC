//Assignment 6 Q13

//Write a program to print “n” Fibonacci numbers using recursion

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n; 
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    
    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    printf("The first %d Fibonacci numbers are:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}
