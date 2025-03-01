//
// Created by Admin on 1/3/2025.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int low = 1, high = 100;
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % (high - low + 1) + low;
    int guess;

    cout << "I have selected a random number between " << low << " and " << high << ". Try to guess it!" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Congratulations! You've guessed the number!" << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "The number is greater than " << guess << ". Try again!" << endl;
        } else {
            cout << "The number is less than " << guess << ". Try again!" << endl;
        }
    }

    return 0;
}

