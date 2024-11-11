//Assignment 3 Q8

#include <stdio.h>
#include <string.h>

char findFirstRepetitiveChar(char str[]) {
    int visited[256] = {0}; 

    for (int i = 0; str[i] != '\0'; i++) {
        if (visited[(int)str[i]] == 1) {
            return str[i]; 
        }
        visited[(int)str[i]] = 1;
    }
    return '\0'; 
}

int main() {
    char str[] = "racecar";

    char result = findFirstRepetitiveChar(str);
    
    if (result != '\0') {
        printf("The first repetitive character in the string \"%s\" is '%c'.\n", str, result);
    } else {
        printf("There is no repetitive character in the string \"%s\".\n", str);
    }

    return 0;
}
