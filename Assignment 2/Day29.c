//Assignment 2 Q7

// Write a program to calculate the grade of a student using switch case. The program should ask
//  the user about the marks obtained by the student and find the grade according to following rule if
//  mark ≥ 95the grade ‘O’, if 81 ≤ mark ≤ 94 then grade ‘A’, if 71 ≤ mark ≤ 80 then grade ‘B’, if
//  61 ≤ mark ≤70thengrade ‘C’, if 51 ≤ mark ≤ 60 then grade ‘D’, if 40 ≤ mark ≤ 50 then grade
//  ‘E’, if mark < 40 then grade ‘F’.

#include <stdio.h>

int main() {
    int marks;
    char grade;


    printf("Enter the marks obtained by the student (0-100): ");
    scanf("%d", &marks);


    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
        return 1;
    }


    switch (marks / 10) {
        case 10: 
        case 9:  
            grade = 'O';
            break;
        case 8:  
            grade = 'A';
            break;
        case 7:  
            grade = 'B';
            break;
        case 6:  
            grade = 'C';
            break;
        case 5:  
            grade = 'D';
            break;
        case 4:  
            grade = 'E';
            break;
        default: 
            grade = 'F';
    }

    printf("The grade of the student is: %c\n", grade);

    return 0;
}
