// Program Name: Metric conversion calculator
// Purpose: This program displays the conversion categories as a menu and ask the
//          user to enter the category; then the program should display another menu for
//          that category selected, and ask the user to enter his conversion option. After that
//          the program should ask the user to enter a number in float and display the
//          converted metric.
// Author: Jack McNamara
// Date Last Modified: July 31, 2025


#include <iostream>
using namespace std;

// Conversion functions
float feetToMeters(float feet) {
    return feet * 0.3048;
}

float milesToKilometers(float miles) {
    return miles * 1.60934;
}

float inchesToCentimeters(float inches) {
    return inches * 2.54;
}

float yardsToFeet(float yards) {
    return yards * 3.0;
}

float gallonsToCubicMeters(float gallons) {
    return gallons * 0.00378541;
}

float litersToGallons(float liters) {
    return liters * 0.264172;
}

float kilogramsToGrams(float kg) {
    return kg * 1000;
}

float poundsToKilograms(float pounds) {
    return pounds * 0.453592;
}

float poundsToOunces(float pounds) {
    return pounds * 16;
}

int main() {
    int category, option;
    float input, result;

    cout << "Metric Conversion Calculator\n";
    cout << "-----------------------------\n";
    cout << "Select a conversion category:\n";
    cout << "1) Length conversions\n";
    cout << "2) Volume conversions\n";
    cout << "3) Weight conversions\n";
    cout << "Enter your choice: ";
    cin >> category;

    switch(category) {
        case 1:
            cout << "\nLength Conversions:\n";
            cout << "1) Feet to Meters\n";
            cout << "2) Miles to Kilometers\n";
            cout << "3) Inches to Centimeters\n";
            cout << "4) Yards to Feet\n";
            cout << "Enter your choice: ";
            cin >> option;
            cout << "Enter the value to convert: ";
            cin >> input;

            switch(option) {
                case 1: result = feetToMeters(input); cout << input << " feet = " << result << " meters\n"; break;
                case 2: result = milesToKilometers(input); cout << input << " miles = " << result << " kilometers\n"; break;
                case 3: result = inchesToCentimeters(input); cout << input << " inches = " << result << " centimeters\n"; break;
                case 4: result = yardsToFeet(input); cout << input << " yards = " << result << " feet\n"; break;
                default: cout << "Invalid option.\n";
            }
            break;

        case 2:
            cout << "\nVolume Conversions:\n";
            cout << "1) Gallons to Cubic Meters\n";
            cout << "2) Liters to Gallons\n";
            cout << "Enter your choice: ";
            cin >> option;
            cout << "Enter the value to convert: ";
            cin >> input;

            switch(option) {
                case 1: result = gallonsToCubicMeters(input); cout << input << " gallons = " << result << " cubic meters\n"; break;
                case 2: result = litersToGallons(input); cout << input << " liters = " << result << " gallons\n"; break;
                default: cout << "Invalid option.\n";
            }
            break;

        case 3:
            cout << "\nWeight Conversions:\n";
            cout << "1) Kilograms to Grams\n";
            cout << "2) Pounds to Kilograms\n";
            cout << "3) Pounds to Ounces\n";
            cout << "Enter your choice: ";
            cin >> option;
            cout << "Enter the value to convert: ";
            cin >> input;

            switch(option) {
                case 1: result = kilogramsToGrams(input); cout << input << " kg = " << result << " grams\n"; break;
                case 2: result = poundsToKilograms(input); cout << input << " pounds = " << result << " kilograms\n"; break;
                case 3: result = poundsToOunces(input); cout << input << " pounds = " << result << " ounces\n"; break;
                default: cout << "Invalid option.\n";
            }
            break;

        default:
            cout << "Invalid category selected.\n";
    }

    return 0;
}
