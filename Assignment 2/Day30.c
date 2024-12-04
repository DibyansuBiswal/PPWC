//Assignment 2 Q8

#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum = 0.0;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    for (n = 1; n <= 9; n++) {
        term = pow((x - 1) / x, n) / n; 
        sum += term;                    
    }

    printf("The sum of the first nine terms of the series is: %.6f\n", sum);

    return 0;
}
