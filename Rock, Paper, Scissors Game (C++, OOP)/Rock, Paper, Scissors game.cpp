#include <iostream>
using namespace std;

class Game {
public:

    void Computer();
};

void Game::Computer() {
    int player, computer;
    char play;

    for (;;) {

        cout << endl << "Come Oon, I will destroy You!" << endl;
        cout << "Enter (0) for Rock, (1) for Paper, (2) for Scissors:-" << endl << endl;
        cout << "You: ";
        cin >> player;

        computer = rand() % 3;

        if (player == computer) {

            cout << "Computer: " << computer << endl;
            cout << endl << "It's a tie!" << endl << endl;
            cout << "Not baad, Wanna play again?  ||  'n' if no  & anything if yes: ";
            cin >> play;

                if (play == 'n') {

                    cout << endl << "Bye bye, See you soon!:)" << endl << endl << endl;
                    break;
                }
        }
        else if (player == 0 && computer == 2 || player == 1 && computer == 0 || player == 2 && computer == 1) {

            cout << "Computer: " << computer << endl;
            cout << endl << "You win!" << endl << endl;
            cout << "Wow, I will beat you this time, Wanna play again?  ||  'n' if no  & anything if yes: ";
            cin >> play;

            if (play == 'n') {

                cout << endl << "Bye bye, See you soon!:)" << endl << endl << endl;
                break;
            }
        }
        else {

            cout << "Computer: " << computer << endl;
            cout << endl << "You lose!" << endl << endl;
            cout << "Haha loser, Wanna more!) ?  ||  'n' if no  & anything if yes: ";
            cin >> play;

            if (play == 'n') {

                cout << endl << "Bye bye, See you soon!:)" << endl << endl << endl;
                break;
            }
        }
    }
}

int main() {
    char press{};

    cout << "Welcome, Wanna chill and play alittle !)" << endl << endl;

    for (;;) {

        cout << "Press 'c' and challenge meeeeee  ||  Press 'q' to quit: ";
        cin >> press;

        if (press == 'c') {
            Game C;

            C.Computer();
            break;
        }
        else if (press == 'q') {
            cout << endl << "Bye bye, See you soon!:)" << endl << endl << endl;
            break;
        }
        else {
            cout << endl << "Invalid Choice!!" << endl << "Note: DON'T USE CAPSLOCK!" << endl << endl;
        }
    }

    return 0;
}
