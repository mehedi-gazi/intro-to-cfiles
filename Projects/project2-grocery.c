// Project 2 - Grocery Store II -

#include <stdio.h> // Include Libraries

int main() { // Insert Main Script
  
 int appleQuantity; // Assigning Values
 double applePrice = 1.49;
 double appleReview;
 int appleReviewDisplay;
 const char appleLocation = 'F';
 int dayOfWeek = 0;

 // Operators, to assign and subtract/divide
 appleQuantity = 23; // Assigns new value.
 appleReview = 823/9; // Divides 823 / 9
 appleReview = (823 + 52)/10; // Brackets / incrementation - decremendation are prioritised over just normal addition / subtraction and division/multiplication
 appleReviewDisplay = appleReview; // Updates the the display and Review

 dayOfWeek += 3; // Updates the current day of Week from 0 to 3


 if (dayOfWeek % 7 == 3 || appleQuantity < 10) // If statement, outlining if the conditions are met, in this case it checks if the dayofWeek currently is 3, by using 3 modulo 7, and if the result is 3, then it also checks using a || (OR) statement to see if the apple Quantity is 
 {
  printf("Sale on apples today, today only they are: $%.2f\n", applePrice * .9);
 }

 // Put all your code above this and if you declare your variables using the given names and types there is no need to change any of the code below.
 printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}