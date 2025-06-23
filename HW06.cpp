// Program Name: Stock Commission
// Purpose: Calculation of Stock Prices
// Author: Jack McNamara
// Date Last Modified: June 23, 2025

#include <iostream>
using namespace std;
int main() {
    double share_price, quanity, cost, commission, total;
cout<< "Enter price per share: ";cin >> share_price;
cout<< "price per share is $" << share_price << "." << endl;
cout<< "Enter the number of shares you want to buy: ";cin >> quanity;
cout<< "You requested to buy "<< quanity << " shares."<< endl;
cost = share_price * quanity;
cout << "The amount paid for the stock alone (without the commission): "<< cost << endl; 
cout << "What is the commission precentage amount? ";cin >> commission; 
cout << "The commission percentage for this sale is "<< commission<< "%"<<endl;
total = cost + (cost * commission /100.0);
cout << "Total cost of sale: $" <<total<< endl; 
return 0;
}