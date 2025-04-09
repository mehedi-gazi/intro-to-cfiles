// Project VII - Mini Calendar - Functions + Scopes

// Inc Libraries
#include <stdio.h>
#include <stdbool.h>

// For my stupid broken brain, the modulo ESSENTIALLY checks if the x is divisible by y, if not then it NOT divisible, otherwise its true and divisible.

// Funct Prototypes
bool is_leap_year(int); // Boolean that checks if its a leap year, using int as its data type.
void add_days_to_date(int*, int*, int*, int);

// Declare Functions
bool is_leap_year(int year) {
    // more condensed as I never knew of the return () funct - Make more condensed like these for better and efficient code
    return (year % 4 == 0 && (year % 100 || year % 400 == 0));
}

int days_in_month[] = {0 , // Placeholder - Index 0
     31, // January - Index 1
     28, // February*
     31, // March
     30, // April
     31, // May
     30, // June
     31, // July
     31, // August
     30, // September
     31, // October
     30, // November
     31, // December -- Index 12
     '\0'};

void add_days_to_date(int* dd, int* mm, int* yr, int days_left_to_add) { // Pointers so we can modify the original value
    *dd = *dd + days_left_to_add;
    *mm = *mm + days_left_to_add;
    *yr = *yr + days_left_to_add;

    int days_left_in_month;

    while (days_left_to_add > 0) {
        days_left_in_month = days_in_month[*mm] - *dd;

        if (days_in_month == *mm && *yr == is_leap_year) {
            days_left_in_month += 1;
        }
    }

    if (days_left_to_add > days_left_in_month) {
        days_left_in_month - days_left_to_add;
        days_left_to_add - 1;
        *dd = 1;

        if (*mm == 12) {
            *mm =1;
            *yr = *yr +1;
        }
        else *mm = *mm + 1;
    }

}

// Main Script
int main() {
    int year;

    printf("Enter year to check if its a leap year (1800 - 10000):");
    scanf("%d", &year);

    if (is_leap_year(year) == true) {
        printf("Leap Year, met conditions\n");
    } else {
        printf("Not Leap Year, not met conditions\n");
    }
}



// Old Code, Simpler Logic.
    /*if (year % 4 != 0) { // If cant divide by 4
        return false; // Then return false, NOT true, = Shows to system, not a leap year
    } else if (year % 100 != 0) { // If I cant divide by 100
        return true; // Then return true, NOT False, = Shows to System , its possibly a leap year.
    } else if (year % 400 != 0) { // If cant divide by 400
        return false; // Then return false, = Shows to system that its NOT a leap year.
    } else {
        return true; // If can divide by 400, therefore leap year.
    }*/