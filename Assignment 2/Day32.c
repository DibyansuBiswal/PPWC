//Assignment 1 Q7

#include <stdio.h>

int main() {
    char desired_grade;
    float min_average_required, current_average, final_weight, score_needed;

    
    printf("Enter desired grade> ");
    scanf(" %c", &desired_grade);

    
    printf("Enter minimum average required> ");
    scanf("%f", &min_average_required);

    
    printf("Enter current average in course> ");
    scanf("%f", &current_average);

    
    printf("Enter how much the final counts as a percentage of the course grade> ");
    scanf("%f", &final_weight);

    
    score_needed = (min_average_required - current_average * (1 - final_weight / 100)) / (final_weight / 100);


    printf("\nYou need a score of %.2f on the final to get a %c.\n", score_needed, desired_grade);

    return 0;
}
