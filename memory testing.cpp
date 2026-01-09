
#include <iostream>
#include <vector>
using namespace std;

class MemoryGame {
    vector<int> numbers;
    int score;
public:
    MemoryGame() : score(0) {
        numbers = {1, 2, 3, 4, 5};
    }

    void play() {
        int guess;
        cout << "Guess a number between 1 and 5: ";
        cin >> guess;
        for (int n : numbers)
            if (n == guess) score++;
    }

    void showScore() const {
        cout << "Score: " << score << endl;
    }
};

int main() {
    MemoryGame game;
    game.play();
    game.showScore();
    return 0;
}
