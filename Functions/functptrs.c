#include <stdio.h>

void incrementAge(int* agePointer) { // Pointers essentially allow the original value to be changed (still hate them)
    *agePointer = *agePointer + 1;
}


int main(void) {
    int age = 21; // Set age to current
    incrementAge(&age); // From what I can understand, it calls the incrementAge function, and in its argument, it adds the deref of int age, (since it has to be the same data value as the pointer, otherwise it breaks )
    printf("%i", age); // Calls the age to then execute, based on the previous line of code.


}