#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandom1000() { // Returns a value, hence int, if void usually for print etc, executions.
    int random1000 = rand() % 1000 + 1; // Picks a random number out of 1000 with limitations
    return random1000; // Returns the function, emphasising not to do any more.
}

int main(void) {
    srand(time(NULL));

    int randomNumber = getRandom1000();
    printf("My random number is: %d", randomNumber);
}