//Assignment 3 Q10

#include <stdio.h>
#include <string.h>
#include <math.h>


void binaryToHexadecimal(char binary[]) {
    int len = strlen(binary);
    int decimal = 0;

    
    for (int i = 0; i < len; i++) {
        if (binary[len - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }

    
    char hexadecimal[20];
    int index = 0;
    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal[index] = '0' + remainder;
        } else {
            hexadecimal[index] = 'A' + (remainder - 10);
        }
        decimal /= 16;
        index++;
    }

    
    printf("The hexadecimal equivalent is: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }
    printf("\n");
}

int main() {
    char binary[65];
    printf("Enter a binary number: ");
    scanf("%64s", binary); 

    binaryToHexadecimal(binary);

    return 0;
}
