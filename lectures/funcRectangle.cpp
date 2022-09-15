/*
Name: Jeremy Bergen

This is calculating a rectangle using functions!!!

step 1: prompt user for name
step 2: greet user
step 7: prompt for sides of a rectangle
step 8: calculate area
step 9: calculate the perimeter
step 10: print area and perimeter
*/
#include <iostream>
#include <string>
#include <cmath>
#include <cassert>

using namespace std;

void greetUser(string);
void promptName();
void rectangleSide(double&, double&);
void calcArea(const double&, const double&, double&);
double calcPerim(double, double);
void printVals(double, double, double, double);
void tests();

const float epsilon = 1e-5;

int main() {
    double side1, side2;
    double area, perim;

    tests();

    promptName();

    // side1 = rectangleSide();
    // side2 = rectangleSide();
    rectangleSide(side1, side2);

    calcArea(side1, side2, area);

    perim = calcPerim(side1, side2);

    printVals(area, perim, side1, side2);

    return 0;
}

void tests() {

    assert(calcPerim(2, 4) == 12);
    assert(calcPerim(42, 15) == 114);
    assert(calcPerim(1, 3) == 8);

    double area;
    calcArea(42, 15, area);
    assert(area == 630);

    calcArea(2, 4, area);
    assert(area == 8);

    calcArea(7.500000045, 4.327, area);
    double expected = 32.4525;
    assert(abs(area - expected) <= epsilon);

    cout << "All test cases passed" << endl;
}

// step 8: calculate area
void calcArea(const double &s1, const double &s2, double &area) {
    // double area;

    area = s1 * s2;

    // return area;
}


//step 2
void greetUser(string firstName) {
    cout << "Hello " << firstName << endl;
}

//step 1
void promptName() {
    string name;

    cout << "Please enter your name: ";
    cin >> name;

    greetUser(name);
    // return name;
}

//step 7 prompt for the sides of a rectangle
void rectangleSide(double &s1, double &s2) {
    // double asdf;

    cout << "Please enter a side of the rectangle: ";
    cin >> s1;

    cout << "Please enter the other side of the rectangle: ";
    cin >> s2;

    // return asdf;
}


// step 9: calculate the perimeter
double calcPerim(double s1, double s2) {
    double perim;

    perim = (2*s1) + (2*s2);

    return perim;
}

// step 10: print area and perimeter
void printVals(double area, double perim, double side1, double side2) {
    cout << "The rectangle with sides "
         << side1 << " and " << side2
         << " has an area and perimeter of: " << endl
         << "area: " << area << endl
         << "perimeter: " << perim << endl;
}