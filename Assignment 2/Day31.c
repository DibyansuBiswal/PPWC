//Assignment 2 Q9

#include <stdio.h>

int main() {
    char input;
    printf("Enter the choice of the character: ");
    scanf("%c", &input);

    int n = input - 'A' + 1; 

    
    for (int i = n; i >= 1; i--) {
        
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c ", ch);
        }

        
        for (int space = 2 * (n - i); space > 0; space--) {
            printf("  ");
        }

        
        for (char ch = 'A' + i - 1; ch >= 'A'; ch--) {
            printf("%c ", ch);
        }

        printf("\n"); 
    }

    return 0;
}
