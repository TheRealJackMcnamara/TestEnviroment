// Program Name: HW05
// Purpose: area of a circle
// Author: Jack McNamara
// Date Last Modified: June 16, 2025

#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>         
int main() {

    double circleRadius = 10.0;
    double circleArea = M_PI * circleRadius * circleRadius;
    cout << "Welcome to the Shape Calculator!" << endl;
    cout << "The area of the circle is: " << circleArea << endl;
    return 0;
}