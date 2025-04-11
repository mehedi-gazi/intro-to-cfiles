// Project VIII - Final - Race Simulator (Structures, Functions ; All relevant knowledge in C)

// Inc. Libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structures Sect
struct Race {
    int numberOfLaps;
    int currentLap;
    char* firstPlaceDriverName;
    char* firstPlaceRaceCarColor;
};

struct RaceCar {
    char* driverName;
    char* raceCarColor;
    int totalLapTime;
};
// Functions Prototypes Sect
// Print Functions Sect
void printIntro() {
    printf("Welcome to our main event digital race fans!\nI hope everybody has their snacks because we are about to begin!");
}

void printCountDown() {
    printf("Racer's Ready! In...\n");
    printf("5,\n4,\n3,\n2,\n1,\nRace!\n");
};

void printFirstPlaceAfterLap(struct Race race) {
    printf("After lap no. %d\n", race.numberOfLaps);
    printf("First Place -> %s in the %s race car!", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

void printCongratulation(struct Race race) {
    printf("Let's all congratulate %s in the %s race car for the extroadinary thrilling event.\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
    printf("It truly was an amazing race and thank you for attending this experience!");
}
// Logic Functions Sect
int calculateTimeToCompleteLap () {
    int speed = (rand() % 3) + 1;
    int acceleration = (rand() % 3) + 1;
    int nerves = (rand() % 3) + 1;

    return speed + acceleration + nerves;
    
}

int updateRaceCar(struct RaceCar* raceCar) {
};

// Main Script
int main(void) {
    srand(time(0));

    printIntro();
    printCountDown();

    return 0;
}