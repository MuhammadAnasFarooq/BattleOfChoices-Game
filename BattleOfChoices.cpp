#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int userChoice, computerChoice;
    int userScore = 0, computerScore = 0;
    char playAgain;

    cout << "><><><><>Snake Water Gun Game<><><><><\n\n\n";

    cout << "Rules of the Game:\n";
    cout << "1. Snake drinks Water -> Snake wins\n";
    cout << "2. Water damages Gun -> Water wins\n";
    cout << "3. Gun kills Snake -> Gun wins\n";
    cout << "4. Same choices result in a Draw\n\n";

    do {
        cout << "\nChoose one:\n";
        cout << "1. Snake\n";
        cout << "2. Water\n";
        cout << "3. Gun\n";

        cout << "Enter your choice (1-3): ";
        cin >> userChoice;

        computerChoice = rand() % 3 + 1;

        cout << "\nComputer chose: ";

        if (computerChoice == 1)
            cout << "Snake\n";
        else if (computerChoice == 2)
            cout << "Water\n";
        else
            cout << "Gun\n";

        if (userChoice == computerChoice) {
            cout << "It's a Draw!\n";
        }
        else if ((userChoice == 1 && computerChoice == 2) ||
                 (userChoice == 2 && computerChoice == 3) ||
                 (userChoice == 3 && computerChoice == 1)) {

            cout << "You Win!\n";
            userScore++;
                 }
        else {
            cout << "Invalid!!\n";
            computerScore++;
        }

        cout << "\nScore:\n";
        cout << "You: " << userScore << endl;
        cout << "Computer: " << computerScore << endl;

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nFinal Score:\n";
    cout << "You: " << userScore << endl;
    cout << "Computer: " << computerScore << endl;

    cout << "\nThanks for playing!\n";

    return 0;

    }
