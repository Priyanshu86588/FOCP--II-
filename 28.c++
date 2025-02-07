//Develope a program to simulate a number-guessing game where the user has limited attempts to guess a randomly generated number. provide feedback for each guess(too high,too low) and terminate the game when the number is guessed or attempts are exhausted.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed for random number generation
    int randomNumber = rand() % 100 + 1; // Generate a number between 1 and 100
    int guess, attempts = 5;
    
    cout << "Guess the number (between 1 and 100). You have " << attempts << " attempts." << endl;
    
    while (attempts > 0) {
        cout << "Enter your guess: ";
        cin >> guess;
        
        if (guess == randomNumber) {
            cout << "Congratulations! You guessed the number correctly." << endl;
            return 0;
        } else if (guess > randomNumber) {
            cout << "Too high." << endl;
        } else {
            cout << "Too low" << endl;
        }
        
        attempts--;
        cout << "Attempts remaining: " << attempts << endl;
    }
    
    cout << "Sorry, you've used all attempts. The number was " << randomNumber << "." << endl;
    return 0;
}
