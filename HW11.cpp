// Program Name: Temperature Conversion
// Purpose: Celsius temperatures to Fahrenheit or Fahrenheit to Celsius temperature
// Author: Jack McNamara
// Date Last Modified: July 10, 2025

#include<iostream>
#include<iomanip>
using namespace std;

int main() {

    // Set varibles
    char choice;
    double tempStart, tempEnd, convertedTemp;

    // Choose coversion type
    cout<<"\nEnter c (or C) to convert Fahrenheit to Celsius  or f (or F) to convert ";cin>>choice;
    cout<< "\nEnter the starting temperature: ";cin >> tempStart;
    cout<< "Enter the ending temperature: ";cin >>tempEnd;
    // Convert to Celsius
    if (choice=='c' || choice=='C')
    {
        cout<<"\nFahrenheit"<<fixed<<setprecision(1)<<setw(15)<<right<<"Celsius\n";
            while (tempStart <= tempEnd){
                convertedTemp = ((tempStart- 32) * 5.0 / 9.02);
                cout << "  "<< tempStart << setw(17)<<right <<convertedTemp << endl;
                tempStart++; //Increment the counter.
            }
        cout<<"\n"<<endl;
        }

    // Convert to Fahrenheit
    else if(choice=='f' || choice=='F')
    {
        cout<<"\nCelsius"<<fixed<<setprecision(1)<<setw(22)<<right<<"Fahrenheit\n";
        while (tempStart <= tempEnd){
            convertedTemp = (9.0 / 5.0) * tempStart + 32;
            cout << "  "<< tempStart << setw(19) <<convertedTemp << endl;
            tempStart++; //Increment the counter.
        }
        cout<<"\n"<<endl;
    }

    

    return 0;
}