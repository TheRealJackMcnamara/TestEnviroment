// Program Name: HW05
// Purpose: area of a circle
// Author: Jack McNamara
// Date Last Modified: June 16, 2025

#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>         
int main() {

    double circleRadius = 10.0; //Set the circle radius varible to 10.    
    double circleArea = M_PI * circleRadius * circleRadius; //Varible caculates the area of the circle using Circle Radius varible.    cout << "Welcome to the Shape Calculator!" << endl;
    cout << "The area of the circle is: " << circleArea << endl;
    return 0;
}
