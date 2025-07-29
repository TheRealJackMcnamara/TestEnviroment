// Program Name: Lo Shu Magic Square Checker
// Purpose: Determines if a 3x3 grid of numbers is a Lo Shu Magic Square.
// Author: Jack McNamara
// Date Last Modified: July 28, 2025

#include <iostream> 
#include <vector>   
#include <numeric>  

using namespace std;
 
const int ROWS = 3;
const int COLS = 3;
const int MAGIC_SUM = 15; // The sum for a 3x3 Lo Shu Magic Square

// Function prototypes
bool isMagicSquare(int values[][COLS]);

// This function formats and displays the array nicely.
void showArray(int values[][COLS]);
int main() {
    // Create a magic two-dimensional array.
    int magicArray[ROWS][COLS] = {
        { 4, 9, 2 },
        { 3, 5, 7 },
        { 8, 1, 6 }
    };

    // Create a normal two-dimensional array (not a magic square).
    int normalArray[ROWS][COLS] = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };

    // Create another normal two-dimensional array (not a magic square, with duplicates).
    int otherArray[ROWS][COLS] = {
        { 7, 7, 7 },
        { 7, 7, 7 },
        { 7, 7, 7 }
    };

    // Test the normalArray
    showArray(normalArray);
    if (isMagicSquare(normalArray)) {
        cout << "This is a Lo Shu magic square.\n\n";
    } else {
        cout << "This is not a Lo Shu magic square.\n\n";
    }

    // Test the magicArray
    showArray(magicArray);
    if (isMagicSquare(magicArray)) {
        cout << "This is a Lo Shu magic square.\n\n";
    } else {
        cout << "This is not a Lo Shu magic square.\n\n";
    }

    // Test the otherArray
    showArray(otherArray);
    if (isMagicSquare(otherArray)) {
        cout << "This is a Lo Shu magic square.\n\n";
    } else {
        cout << "This is not a Lo Shu magic square.\n\n";
    }

    return 0; // Indicate successful program execution
}
void showArray(int values[][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << values[i][j] << " ";
        }
        cout << endl; // Newline after each row
    }
}

bool isMagicSquare(int values[][COLS]) {
    // --- Rule 1: Check if numbers 1-9 are present exactly once ---
    bool seen[10] = {false}; // Array to track if numbers 1-9 have been seen. Index 0 is unused.

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            int num = values[i][j];
            // Check if the number is within the valid range (1-9)
            // and if it has already been seen.
            if (num < 1 || num > 9 || seen[num]) {
                return false; // Invalid number or duplicate found
            }
            seen[num] = true; // Mark the number as seen
        }
    }

    for (int i = 1; i <= 9; ++i) {
        if (!seen[i]) {
            return false; // A number from 1-9 is missing
        }
    }

    // --- Rule 2: Check sums of rows, columns, and diagonals ---
    int sum = 0; // Variable to hold current sum for comparison

    // Check row sums
    for (int i = 0; i < ROWS; ++i) {
        sum = 0; // Reset sum for each row
        for (int j = 0; j < COLS; ++j) {
            sum += values[i][j];
        }
        if (sum != MAGIC_SUM) {
            return false; // Row sum is not 15
        }
    }

    // Check column sums
    for (int j = 0; j < COLS; ++j) {
        sum = 0; // Reset sum for each column
        for (int i = 0; i < ROWS; ++i) {
            sum += values[i][j];
        }
        if (sum != MAGIC_SUM) {
            return false; // Column sum is not 15
        }
    }
 // Check main diagonal sum (top-left to bottom-right)
    sum = 0;
    for (int i = 0; i < ROWS; ++i) {
        sum += values[i][i];
    }
    if (sum != MAGIC_SUM) {
        return false; // Main diagonal sum is not 15
    }

    // Check anti-diagonal sum (top-right to bottom-left)
    sum = 0;
    for (int i = 0; i < ROWS; ++i) {
        sum += values[i][COLS - 1 - i];
    }
    if (sum != MAGIC_SUM) {
        return false; // Anti-diagonal sum is not 15
    }

    // If all checks pass, it's a magic square
    return true;
}
