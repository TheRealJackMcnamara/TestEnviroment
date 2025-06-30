// Program Name: Math Tutor
// Purpose: solving formulas
// Author: Jack McNamara
// Date Last Modified: June 30, 2025
#include <iostream>  
#include <cstdlib>   
#include <ctime>     
#include <iomanip>   // Required for setw()

using namespace std; 

int main() {
    // Seed the random number generator using the current time.
    // This ensures that a different sequence of random numbers is generated
    // each time the program runs.
    srand(static_cast<unsigned int>(time(0)));

    // Define the minimum and maximum range for the random numbers.
    const int MIN_NUM = 50;
    const int MAX_NUM = 500;

    // Generate two random numbers within the specified range.
    int num1 = rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM;
    int num2 = rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM;

    // Calculate the correct sum of the two numbers.
    int sum = num1 + num2;
    int studentAnswer; // Variable to store the student's input

    // Display the addition problem to the student, formatted.
    cout << setw(6) << num1 << endl; 
    cout << setw(3) << "+" << setw(3) << num2 << endl; 
    cout << "  -----" << endl;

    // Prompt the student to enter their answer.
    cout << endl; // Add a blank line for better spacing
    cout << "Enter the answer here: ";
    cin >> studentAnswer; // Read the student's answer from the keyboard

    // Check if the student's answer is correct and provide feedback.
    if (studentAnswer == sum) {
        cout << "Congratulations!" << endl;
    } else {
        cout << "Sorry, that's incorrect." << endl;
    }
    
    // Always show the correct answer
    cout << "The answer is " << sum << "." << endl;

    return 0;
}
