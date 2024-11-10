//Assignment 3 Q6

#include <stdio.h>

void findDifference(int p[], int sizeP, int q[], int sizeQ) {
    printf("Difference (p - q) is: { ");
    for (int i = 0; i < sizeP; i++) {
        int found = 0;
        for (int j = 0; j < sizeQ; j++) {
            if (p[i] == q[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d ", p[i]);
        }
    }
    printf("}\n");
}

int main() {
    int p[] = {1, 2, 3, 4};
    int q[] = {2, 4, 5, 6};

    int sizeP = sizeof(p) / sizeof(p[0]);
    int sizeQ = sizeof(q) / sizeof(q[0]);

    findDifference(p, sizeP, q, sizeQ);

    return 0;
}
