#include "Game.h"
#include "Utils.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Game::start() {
    srand(time(0));

    cout << "=========================" << endl;
    cout << "      NUMBER HUNT        " << endl;
    cout << "=========================" << endl;

    selectDifficulty();
    playGame();
}

void Game::selectDifficulty() {
    int choice;

    cout << endl;
    cout << "Select Difficulty Level" << endl;
    cout << "1. Easy (1 - 50)" << endl;
    cout << "2. Medium (1 - 100)" << endl;
    cout << "3. Hard (1 - 500)" << endl;
    cout << endl;

    cin >> choice;

    if (choice == 1) {
        minRange = 1;
        maxRange = 50;
    }
    else if (choice == 2) {
        minRange = 1;
        maxRange = 100;
    }
    else {
        minRange = 1;
        maxRange = 500;
    }
}

void Game::playGame() {
    int target = generateRandomNumber(minRange, maxRange);
    int guess;

    cout << endl;
    cout << "Guess the number between "
         << minRange << " and "
         << maxRange << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == target) {
            cout << "You guessed correctly!" << endl;
            break;
        }
        else if (guess < target) {
            cout << "Too low!" << endl;
        }
        else {
            cout << "Too high!" << endl;
        }
    }
}