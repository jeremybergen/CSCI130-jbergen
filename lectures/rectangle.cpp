/*
Name: Jeremy Bergen
Date: 09/06/22

This program will prompt for 2 sides of a rectangle
and calculate the area and perimeter

step 1: prompt user for name
step 2: greet user
step 7: prompt for sides of a rectangle
step 8: calculate area
step 9: calculate the perimeter
step 10: print area and perimeter
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;
    unsigned int side1, side2;
    unsigned int area, perimeter;

    // step 1: prompt user for name
    cout << "Please enter your full name: ";
    getline(cin, fullName);
    
    // step 2: greet user
    cout << "Hello " << fullName << endl;

    // step 7: prompt for sides of a rectangle
    cout << "Please enter side 1: ";
    cin >> side1;

    cout << "Please enter side 2: ";
    cin >> side2;

    // cout << "DEBUG: side1: " << side1 << endl;
    // cout << "DEBUG: side2: " << side2 << endl;

    // step 8: calculate area
    area = side1 * side2;

    // step 9: calculate the perimeter
    perimeter = (2 * side1) + (2 * side2);

    // cout << "DEBUG: area: " << area << endl;
    // cout << "DEBUG: perimeter: " << perimeter << endl;

    // step 10: print area and perimeter
    cout << "The rectangle with sides "
         << side1 << " and " << side2
         << " has an area of " << area
         << " and a perimeter of " << perimeter << endl;

    // cout << area << endl << perimeter << endl;
    return 0;
}