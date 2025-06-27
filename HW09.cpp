// Program Name: Temperature Conversion
// Purpose: Celsius temperatures to Fahrenheit or Fahrenheit to Celsius temperature
// Author: Jack McNamara
// Date Last Modified: June 27, 2025

#include<iostream>
#include<iomanip>
using namespace std;

int main() {

    // Set varibles
    char choice;
    double tempInput, convertedTemp;

    // Choose coversion type
    cout<<"Enter c (or C) to convert Fahrenheit to Celsius  or f (or F) to convert ";cin>>choice;

    // Convert to Celsius
    if (choice=='c' || choice=='C')
    {
        cout<< "Enter fahrenheit temperture to convert to celsius: ";cin >> tempInput;
        convertedTemp = ((tempInput- 32) * 5.0 / 9.02);
        cout<< "Temperture in celsius: "<<fixed<<setprecision(1)<<convertedTemp<<endl;
    }

    // Convert to Fahrenheit
    else if(choice=='f' || choice=='F')
    {
        cout<< "Enter celsius temperture to convert to fahrenheit: ";cin >> tempInput;
        convertedTemp = (9.0 / 5.0) * tempInput + 32;
        cout<< "Temperture in celsius: "<<fixed<<setprecision(1)<<convertedTemp<<endl; 
    }

    

    return 0;
}