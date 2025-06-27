// Program Name: Math Tutor
// Purpose: solving formulas
// Author: Jack McNamara
// Date Last Modified: June 24, 2025
#include <iostream>  
#include <cstdlib>   
#include <ctime>     
#include <iomanip>   

using namespace std; 

int main() {
    srand(static_cast<unsigned int>(time(0)));
    const int MIN_NUM = 50;
    const int MAX_NUM = 500;
    int num1 = rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM;
    int num2 = rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM;
    int sum = num1 + num2;
    cout << setw(6) << num1 << endl; 
    cout << setw(3) << "+" << setw(3) << num2 << endl; 
    cout << "  -----" << endl;
    cout << "Press Enter to see the answer . . ." << endl;
    cout << setw(6) << num1 << endl; 
    cout << setw(3) << "+" << setw(3) << num2 << endl; 
    cout << "  -----" << endl; 
    cout << setw(6) << sum << endl; 

    return 0;
}
