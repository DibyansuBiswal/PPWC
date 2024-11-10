//Assignment 3 Q7

#include <stdio.h>

void copyDistinctElements(int input[], int size, int output[], int *distinctCount) {
    int isDistinct;

    *distinctCount = 0; 

    for (int i = 0; i < size; i++) {
        isDistinct = 1;
        
        for (int j = 0; j < *distinctCount; j++) {
            if (input[i] == output[j]) {
                isDistinct = 0;
                break;
            }
        }
        
        if (isDistinct) {
            output[*distinctCount] = input[i];
            (*distinctCount)++;
        }
    }
}

int main() {
    int input[] = {4, 7, 7, 3, 2, 5, 5};
    int size = sizeof(input) / sizeof(input[0]);

    int output[size]; 
    int distinctCount; 

    copyDistinctElements(input, size, output, &distinctCount);

    printf("Output array with distinct elements: ");
    for (int i = 0; i < distinctCount; i++) {
        printf("%d ", output[i]);
    }
    printf("\n");

    return 0;
}
