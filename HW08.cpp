// Program Name: Days in a Month
// Purpose: Displays the number of days in the month base on user's input.
// Author: Jack McNamara
// Date Last Modified: June 27, 2025

#include<iostream>
using namespace std;
int main() {
     int month, year;
     bool LeapYear;

     cout<<"Enter a month (1-12): ";cin>>month;
     cout<<"Enter a year: ";cin>>year;

     LeapYear = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
     
     if (month==2){
        if (LeapYear == true)
        {
        cout<<" 29 days\n";
        }
        else
        {
        cout<<" 28 days\n";
        }}

     else if (month==1||month==3||month==5||month==7||month==8||month==10||month==12){
        cout<<" 31 days\n";
     }
     else if(month==4||month==6||month==9||month==11){
        cout<<" 30 days\n";}

    return 0;
}