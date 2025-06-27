
// Program Name: HW09
// Purpose: convert temperatures between Celsius and Fahrenheit.
// Author: Jack McNamara
// Date Last Modified: June 27, 2025

#include <iostream>  
#include <iomanip>   
#include <cctype> 
using namespace std;

int main() {
    char choice;       
    double temperature; 
    double convertedTemp; 
 cout << fixed << setprecision(1);
    cout << "Enter c (or C) to convert Fahrenheit to Celsius ";
   cout << " or f (or F) to convert Celsius to Fahrenheit: ";
cin >> choice;
    choice = toupper(choice);
    if (choice == 'F') {
      cout << "Enter the temperature in Celsius: ";
    cin >> temperature;
        convertedTemp = (9.0 / 5.0) * temperature + 32.0;
        cout << temperature << " Celsius is " << convertedTemp << " degrees Fahrenheit." << endl;
    } else if (choice == 'C') {
      cout << "Enter the temperature in Fahrenheit: ";
     cin >> temperature;
      convertedTemp = (temperature - 32.0) * (5.0 / 9.0);
    cout << temperature << " Fahrenheit is " << convertedTemp << " degrees Celsius." << endl;
    } else {
  cout << "Invalid choice. Please enter 'C' or 'F'." << endl;
    }

    return 0;
}
