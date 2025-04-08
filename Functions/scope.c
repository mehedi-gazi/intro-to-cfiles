// scopes, essentially like building blocks of code and how they interact and how there are limitations to certain variables of code
#include <stdio.h>

// Write your code below...

char* myMessage = "This is my global message!";

void myFunc() {
  char* myMessage = "This is my local message!";
  printf("%s\n", myMessage);
}

int main() {
  // You can change `myNumber` to be larger than `50`
  int myNumber = 67;

  if (myNumber <= 50) {
    printf("%i\n", myNumber);
    printf("%s\n", myMessage);
  } else {
    int myNumber = 500;
    printf("%i\n", myNumber);
    myFunc();
  }
}