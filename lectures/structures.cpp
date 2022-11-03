/*
Name: Jeremy Bergen

Structures
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct someStruct {
    int num1;
    int num2;
    string someChar;
};

struct Points {
    int x;
    int y;
};

int main(int argc, char *argv[]) {
    float distance;
    Points point1;
    Points point2;
    Points myPoints[2];

    myPoints[1] = point2;

    point1.x = 0;
    point1.y = 0;
    myPoints[0] = point1;

    myPoints[1].x = 1;
    myPoints[1].y = 1;

    distance = sqrt(pow((myPoints[0].x - myPoints[1].x), 2) + pow((myPoints[0].y - myPoints[1].y), 2));

    cout << "The distance is: " << distance << endl;

    // someStruct bob;
    // someStruct *heapBob = new someStruct;

    // cout << &bob << endl;
    // cout << &bob.num1 << endl;
    // cout << &bob.num2 << endl;
    // cout << &bob.someChar << endl;

    // bob.num1 = 42;
    // bob.num2 = 23;
    // bob.someChar = "J";

    // heapBob->num1 = 42;
    // heapBob->num2 = 23;
    // heapBob->someChar = "J";

    // cout << heapBob->num1 << endl;

    // // cout << bob.someChar << endl;
    // delete heapBob;

    return 0;
}