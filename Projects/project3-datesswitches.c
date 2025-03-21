// Project III - Dates and Switches
#include <stdio.h>

int main(void) {
  int month, day, year;

  // Standard date form
  printf("Enter date (mm/dd/yyyy): ");
  // Split the user input into 3 variables for the date
  // Don't worry about the `scanf()` below, you'll learn more about these later!
  scanf("%d /%d /%d", &month, &day, &year);

  // Print the month
  switch (month) { // Providing the number index based on what the user inputs.
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
  }
  

  // Print the day
  printf(" %d", day); // Executes the day format shown in terminal based on the project brief.


  // Print the suffix for a given day
  switch (day) {
    case 1: case 21: case 31: // Prints if user input is 1 / 21 / 31 ending in st
        printf("st, ");
        break;
    case 2: case 22: // Prints if user input is 2 / 22 ending in nd
        printf("nd, ");
        break;
    case 3: case 23: // Prints if user input is 3 / 23 ending in rd
        printf("rd, ");
        break;
    default: // all other cases by default is th. (in a month)
        printf("th, ");
  }
  

  // Print the year
  printf("%d.\n", year);
  
  
  return 0;
}