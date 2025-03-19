#include <stdio.h>
 
int main() {
 
  double ph = 7.9;
  ph = 4.6;
  ph = 7;

  // Start the if, else if, else here:
  if (ph > 7){
    printf("Basic\n");
  } else if (ph < 7){
    printf("Acidic\n");
  } else {
    printf("Neutral\n");
  }

}