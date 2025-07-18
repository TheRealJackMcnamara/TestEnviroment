// Program Name: Die Throw
// Purpose: This program uses a function named throwDie that simulates 
//          throwing a die. When you call the function, it should generate a random 
//          number in the range of 1 through 6.
// Author: Jack McNamara
// Date Last Modified: July 16, 2025


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to simulate a die throw (returns 1–6)
int throwDie() {
    return rand() % 6 + 1;
}

// Function to count and display how many times each die value appeared
void countDieResults(const int results[], int size) {
    int counts[6] = {0}; // For values 1 through 6

    // Count each result
    for (int i = 0; i < size; i++) {
        counts[results[i] - 1]++;
    }

    // Display results
    cout << "\nSummary of die values:\n";
    for (int i = 0; i < 6; i++) {
        cout << (i + 1) << " appears " << counts[i] << " \n";
    }
}

int main() {
    int numThrows;

    // Seed RNG
    srand(static_cast<unsigned int>(time(0)));

    // Get number of throws
    cout << "How many die throws should I make? ";
    cin >> numThrows;
    cout << endl;

    // Store all results
    int* results = new int[numThrows];

    // Simulate throws and print each result
    for (int i = 0; i < numThrows; i++) {
        results[i] = throwDie();
        cout << (i + 1) << ":\t" << results[i] << endl;
    }

    // Count and display summary using the function
    countDieResults(results, numThrows);



    return 0;
}
