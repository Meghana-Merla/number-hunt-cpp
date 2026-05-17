#pragma once

class Game {
public:
    void start();

private:
    int minRange;
    int maxRange;

    void selectDifficulty();
    void playGame();
};