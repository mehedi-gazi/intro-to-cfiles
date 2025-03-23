// Project IV - Fizz Buzz (Loops // Conditionals)
#include <stdio.h>

int main() {

    for (int i = 1; i <= 100; i++) { // Using a for loop, as the conditions are already known

        if (i % 3 == 0) { // Checks if the i (storing the number) is divisible by 3 using the modulo operator to double check there is no remainders.
            printf("Fizz\n");
            continue; // Used as a checkpoint, breaks out of this stage
        }

        if (i % 5 == 0) { // Checks if 5 is divisible by the number
            printf("Buzz\n");
            continue;
        }

        if (i % 15 == 0) { // Checks if 15 is divisible by the number, which turn creates a merged word from both Fizz + Buzz.
            printf("FizzBuzz\n");
            continue;
        }
        printf("%d\n", i); // Executes and prints out the number if none of the top 3 checkpoints are met.
        
    }
}