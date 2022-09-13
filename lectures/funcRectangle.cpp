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

using namespace std;

void greetUser(string);
void promptName();
double rectangleSide();
double calcArea(double, double);
double calcPerim(double, double);
void printVals(double, double, double, double);

int main() {
    double side1, side2;
    double area, perim;

    promptName();

    side1 = rectangleSide();
    side2 = rectangleSide();

    area = calcArea(side1, side2);

    perim = calcPerim(side1, side2);

    printVals(area, perim, side1, side2);

    return 0;
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
double rectangleSide() {
    double asdf;

    cout << "Please enter a side of the rectangle: ";
    cin >> asdf;

    return asdf;
}

// step 8: calculate area
double calcArea(double s1, double s2) {
    double area;

    area = s1 * s2;

    return area;
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