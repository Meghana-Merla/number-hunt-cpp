#pragma once

class Game {
public:
    void start();

private:
    int minRange;
    int maxRange;
    int attempts;

    void selectDifficulty();
    void playGame();
    void showFeedback(int guess, int target);
};