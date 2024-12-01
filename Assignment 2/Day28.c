//Assignment 2 Q6

//  Write a program that determines the day number (1 to 366) in a year for a date that is provided as
//  input data. As an example, January 1, 1994, is day 1. December 31, 1993, is day 365. December 31,
//  1996, is day 366, since 1996 is a leap year. A year is a leap year if it is divisible by four, except that
//  any year divisible by 100 is a leap year only if it is divisible by 400. Your program should accept the
//  month, day, and year as integers. Include a function leap that returns 1 if called with a leap year, 0
//  otherwise.

#include <stdio.h>

// Function to check if a year is a leap year
int leap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1; 
    else
        return 0; 
}

int main() {
    int day, month, year;
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // Days in months for a non-leap year

    // Input: month, day, year
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter day (1-31): ");
    scanf("%d", &day);
    printf("Enter year: ");
    scanf("%d", &year);

    // Adjust February days if it is a leap year
    if (leap(year)) {
        days_in_month[1] = 29;
    }

    // Calculate day number
    int day_number = 0;
    for (int i = 0; i < month - 1; i++) {
        day_number += days_in_month[i];
    }
    day_number += day;

    
    printf("Day number for %d/%d/%d is: %d\n", month, day, year, day_number);

    return 0;
}

