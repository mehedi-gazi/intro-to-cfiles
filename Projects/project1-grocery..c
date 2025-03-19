// Project 1 - Grocery Store - Libraries / Data Types (Updating and Conversions) / Assignment and constants.

#include <stdio.h> // Initialise Libraries

int main() { // Main Script to Enter

  int appleQuantity = 23; // Integer number (no decimals)
  double applePrice = 1.49; // Financials - Different currencies
  float appleReview = 82.5; // Decimals, double -> to expand it
  int appleReviewDisplay; // Assigning the int to display the integer value of the review
  const char appleLocation = 'F'; // Const (Not changed) character for the location of Apples

  appleReviewDisplay = (int)appleReview; // Convert the float to an int for display purposes
  

// Put all your code above this and if you declare your variables using the given names and types there is no need to change any of the code below.
printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}