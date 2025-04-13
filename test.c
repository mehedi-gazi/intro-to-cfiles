// Inc. Libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Structures Sect
struct Race {
    int numberOfLaps;
    int currentLap;
    char firstPlaceDriverName[60];
    char firstPlaceRaceCarColor[30];
};

struct RaceCar {
    char driverName[60];
    char raceCarColor[30];
    int totalLapTime;
};
// Functions Prototypes Sect
// Print Functions Sect
void printIntro() {
    printf("Welcome to our main event digital race fans!\nI hope everybody has their snacks because we are about to begin!");
}

void printCountDown() {
    printf("Racer's Ready! In...\n");
    for (int i = 5; i > 0; i--)
    {
        printf("%i\n", i);
    }
    printf("Race!\n");
};

void printFirstPlaceAfterLap(struct Race race) {
    printf("After lap no. %d\n", race.currentLap);
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

void updateRaceCar(struct RaceCar* raceCar) {
    raceCar->totalLapTime += calculateTimeToCompleteLap();
};

void updateFirstPlace(struct Race *race, struct RaceCar *raceCar1, struct RaceCar *raceCar2) {
    if (raceCar1->totalLapTime <= raceCar2->totalLapTime)
    {
        strcpy(race->firstPlaceDriverName, raceCar1->driverName);
        strcpy(race->firstPlaceRaceCarColor, raceCar1->raceCarColor);
    }
    else
    {
        strcpy(race->firstPlaceDriverName, raceCar2->driverName);
        strcpy(race->firstPlaceRaceCarColor, raceCar2->raceCarColor);
    }
};

void startRace(struct RaceCar* racecar1, struct RaceCar* racecar2) {
    struct Race race = {5, 1, "", ""};

    for (int i = 0; i <= race.numberOfLaps ; i++) {
        race.currentLap++;
        updateRaceCar(racecar1);
        updateRaceCar(racecar2);

        updateFirstPlace(&race, racecar1, racecar2);
        printFirstPlaceAfterLap(race);
    }
    printCongratulation(race);
}

// Main Script
int main()
{
    // races two racers 
    srand(time(0));
    struct RaceCar raceCar1 = {"Mehedi", "Orange", 0};
    struct RaceCar raceCar2 = {"Mahe", "Yellow", 0};
    printIntro();
    printCountDown();
    startRace(&raceCar1, &raceCar2);
};