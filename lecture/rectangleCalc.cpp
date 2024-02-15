/*
Name: Jeremy Bergen

Rectangle calculator

Greet user
    Display name prompt
    Display welcome prompt with name

Prompt for side1 and side2 (float)
Calc perimeter <perim = 2(side1 + side2)>
Calc area <area = side1 * side2>
Print out results
*/
#include <iostream>
#include <string>
#include <cstdio>
#include <cassert>
#include <cmath>

using namespace std;

// Greet user
//     Display name prompt
string promptName();
//     Display welcome prompt with name
void greetUser(string);

// Prompt for side1 and side2 (float)
float getSide();
// Calc perimeter <perim = 2(side1 + side2)>
float calcPerim(float, float);
// Calc area <area = side1 * side2>
float calcArea(float, float);
// Print out results
void printResults(float, float, float, float);

void test();

int main()
{
    test();
    string name;
    float side1, side2;
    float perim, area;

    name = promptName();
    greetUser(name);

    side1 = getSide();
    side2 = getSide();

    perim = calcPerim(side1, side2);
    area = calcArea(side1, side2);

    printResults(area, perim, side1, side2);

    // cout << "DEBUG: side1: " << side1 << endl;
    // cout << "DEBUG: side2: " << side2 << endl;
    // cout << "DEBUG: perim: " << perim << endl;
    // cout << "DEBUG:  area: " << area << endl;

    return 0;
}

void test()
{
    float side1, side2;
    //calcPerim(10, 12) == 44.000099999990000000000001
    assert(abs(calcPerim(10, 12) - 43.9999) <= 0.0001);
    assert(calcPerim(1, 2) == 6);
    side1 = 2;
    side2 = 3;
    assert(calcArea(side1, side2) == 6);
    cout << "All test cases passed" << endl;
}

string promptName()
{
    string inputName;

    cout << "Please enter your name: ";
    getline(cin, inputName);

    return inputName;
}
//     Display welcome prompt with name
void greetUser(string name)
{
    cout << "Welcome " 
         << name 
         << " to our rectangle calculator." 
         << endl;
}

// Prompt for side1 and side2 (float)
float getSide()
{
    float side;

    cout << "Please enter a side of the rectangle: ";
    cin >> side;

    return side;
}
// Calc perimeter <perim = 2(side1 + side2)>
float calcPerim(float s1, float s2)
{
    float perim;
    perim = 2*(s1 + s2);
    return perim;
}
// Calc area <area = side1 * side2>
float calcArea(float s1, float s2)
{
    float area;
    area = s1 * s2;
    return area;
}
// Print out results
void printResults(float area, float perim, float side1, float side2)
{
    printf("The rectangle with sides %.2f and %.2f, has an area of %.2f and a perimeter of %.2f\n", side1, side2, area, perim);
}