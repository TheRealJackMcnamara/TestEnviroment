// Program Name: Rock, Paper, Scissors Game
// Purpose: Allows a user to play Rock, Paper, Scissors against the computer.
// Author: Jack McNamara
// Date Last Modified: July 20, 2025

#include <iostream>   
#include <cstdlib>   
#include <ctime>     
#include <string>    
#include <sstream>    

using namespace std;

// Constants for game choices and menu options
const int ROCK = 1;
const int PAPER = 2;
const int SCISSORS = 3;
const int QUIT = 4;

// Function prototypes
// Gets the user's choice (Rock, Paper, Scissors, or Quit)
int getUserChoice();
// Generates the computer's random choice
int getComputerChoice();
// Displays the textual representation of a given choice
void displayChoice(int choice);
// Determines the winner of a round
// Returns 0 for a tie, 1 for user win, -1 for computer win
int determineWinner(int userChoice, int compChoice);

//Main function of the Rock, Paper, Scissors game.

int main() {
    // Seed the random number generator using the current time.
    // This ensures different random choices each time the program runs.
    srand(static_cast<unsigned int>(time(0)));

    int userChoice;     // Stores the user's selected option
    int computerChoice; // Stores the computer's randomly generated option
    int gameResult;     // Stores the result of each round (tie, user win, computer win)

    // Main game loop: continues as long as there's a tie or the user hasn't quit.
    do {
        // Get the user's choice from the menu.
        userChoice = getUserChoice();

        // Check if the user chose to quit the game.
        if (userChoice == QUIT) {
            cout << "\nThanks for playing! Goodbye!\n";
            // Exit the loop immediately if the user quits.
            break;
        }

        // Get the computer's random choice.
        computerChoice = getComputerChoice();

        // Display the choices made by both the user and the computer.
        cout << "\nYou selected: ";
        displayChoice(userChoice);
        cout << "The computer selected: ";
        displayChoice(computerChoice);

        // Determine the winner of the current round.
        gameResult = determineWinner(userChoice, computerChoice);

        // Announce the result of the round.
        if (gameResult == 0) {
            cout << "It's a tie! Let's play again to determine the winner.\n";
        } else if (gameResult == 1) {
            cout << "YOU win!\n";
        } else { // gameResult must be -1
            cout << "Computer wins!\n";
        }
        cout << endl; // Add an extra newline for better readability between rounds.

    } while (gameResult == 0 || userChoice != QUIT); // Loop continues on tie or if user hasn't quit (though break handles quit).

    // Return 0 to indicate successful program execution.
    return 0;
}

//Prompts the user for their choice and validates the input.

int getUserChoice() {
    string inputString; // Stores the raw input from the user as a string
    int choice = 0;     // Stores the converted integer choice
    bool validInput = false; // Flag to control the input validation loop

    // Loop until valid input is received.
    while (!validInput) {
        // Display the game menu.
        cout << "Game Menu\n";
        cout << "---------\n";
        cout << "1) Rock\n";
        cout << "2) Paper\n";
        cout << "3) Scissors\n";
        cout << "4) Quit\n";
        cout << "Enter your choice: ";

        // Read the entire line of input from the user.
        getline(cin, inputString);

        // Use stringstream to attempt to convert the input string to an integer.
        stringstream ss(inputString);
        ss >> choice; // Attempt to extract an integer from the stringstream.

        // Check for conversion errors or extra characters after the number.
        
        if (ss.fail() || !ss.eof()) {
            cout << "Invalid input. Please enter a number (1-4).\n\n";
            // Reset choice to an invalid value to ensure the range check below fails if it somehow proceeds.
            choice = 0;
        }
        // If the conversion was numerically successful (ss.fail() is false and ss.eof() is true),
        // then check if the number is within the valid range.
        else if (choice >= ROCK && choice <= QUIT) {
            validInput = true; // Input is valid, exit the loop.
        }
        // If conversion was successful but the number is out of range.
        else {
            cout << "Invalid choice. Please enter a number between 1 and 4.\n\n";
        }
    }
    return choice; // Return the validated choice.
}

//@brief Generates a random choice for the computer.

int getComputerChoice() {
    // Generate a random number between 1 and 3.
    // rand() % 3 gives 0, 1, or 2. Adding 1 shifts it to 1, 2, or 3.
    return (rand() % 3) + 1;
}

//Displays the textual representation of a game choice.

void displayChoice(int choice) {
    switch (choice) {
        case ROCK:
            cout << "Rock\n";
            break;
        case PAPER:
            cout << "Paper\n";
            break;
        case SCISSORS:
            cout << "Scissors\n";
            break;
        default:
            cout << "UNKNOWN CHOICE\n";
            break;
    }
}

//Determines the winner of a single round of Rock, Paper, Scissors.

int determineWinner(int userChoice, int compChoice) {
    // Check for a tie.
    if (userChoice == compChoice) {
        return 0; // Return 0 for a tie.
    }
    // Check all conditions where the user wins.
    else if (
        (userChoice == ROCK && compChoice == SCISSORS) ||    // Rock smashes Scissors
        (userChoice == SCISSORS && compChoice == PAPER) ||   // Scissors cuts Paper
        (userChoice == PAPER && compChoice == ROCK)          // Paper wraps Rock
    ) {
        // Print the winning message based on the user's choice.
        if (userChoice == ROCK) cout << "Rock smashes scissors.\n";
        else if (userChoice == SCISSORS) cout << "Scissors cuts paper.\n";
        else if (userChoice == PAPER) cout << "Paper wraps rock.\n";
        return 1; // Return 1 for user win.
    }
    // If it's not a tie and the user didn't win, the computer must have won.
    else {
        // Print the winning message based on the computer's choice.
        if (compChoice == ROCK) cout << "Rock smashes scissors.\n";
        else if (compChoice == SCISSORS) cout << "Scissors cuts paper.\n";
        else if (compChoice == PAPER) cout << "Paper wraps rock.\n";
        return -1; // Return -1 for computer win.
    }
}
