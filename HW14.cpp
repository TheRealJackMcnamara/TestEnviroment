// Program Name: Maximum Function
// Purpose: This program will prompt the user for two numbers, compare them and show the maximum by calling your maximum function. 
//          Declare a function called max_two that compares the n
// Author: Jack McNamara
// Date Last Modified: July 16, 2025

#include <iostream>
using namespace std;

// Function Prototype: Evaluating the maximu of two numbers.
void max_two(int, int);

int main ()
{
    // Varibles
    int firstNumber,secondNumber;
    // Ask user for firstNumber and secondNumber
    cout <<"\nEnter first number:  ";cin>>firstNumber;
    cout <<"Enter second number: ";cin>>secondNumber;
    // Function parameter
    max_two(firstNumber,secondNumber);
   
    return 0;
}

// Function Header
void max_two(int a, int b)
{
    if (a>b) cout <<"\nThe maximum of the two numbers is: "<< a << endl;
    else cout <<"\nThe maximum of the two numbers is: "<< b << endl;
}