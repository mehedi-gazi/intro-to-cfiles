#include <stdio.h>

struct Person {
    char name[40];
    int age;
};

int main(void) {
    struct Person person1 = {"Martin", 57};
    struct Person person2 = {"Michelle", 27};

    struct Person* person1Pointer = &person1; // Assigning pointers to manage memory
    struct Person* person2Pointer = &person2; // Essentially using struct Person as a foundation, creates a pointer, and deref. the values from person 1.

    (*person1Pointer).age +=1; // One way of notation, using parentheses () and asterisk *
    person2Pointer -> age +=10; // Second way of notation, preferred and simpler. (Arrow Notation)


    printf("Hello my name is %s and I am %d years old.\n", person1.name, person1.age);
    printf("Hello my name is %s and I am %d years old.\n", person2.name, person2.age);
}

// Structure Pointers