/*
Name: Jeremy Bergen

Structures
*/
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <random>
#include <vector>

using namespace std;

struct struct2 {
    int nums;
};

struct myStruct {
    string firstName;
    static const int arrSize = 10;
    // int nums[arrSize];
    vector<int> nums;
    struct2 *bob = new struct2();
};

int main(int argc, char *argv[]) {
    // myStruct newStruct;
    myStruct *newStruct = new myStruct();
    // newStruct->bob = new struct2();

    newStruct->bob->nums = 42;

    cout << newStruct->bob->nums << endl;
    // int arrSize = 5;
    // int nums[arrSize];

    // newStruct.nums[0] = 42;
    // newStruct.nums[1] = 15;
    // newStruct.nums[2] = 23;
    // newStruct.nums[3] = 9000;
    // newStruct.nums[4] = -15;

    // for (int i = 0; i < newStruct->arrSize; i++) {
    //     // newStruct.nums[i] = rand();
    //     newStruct->nums.push_back(rand());
    // }

    // for (int i = 0; i < newStruct->nums.size(); i++) {
    //     // cout << newStruct.nums[i] << endl;
    //     cout << newStruct->nums.at(i) << endl;
    // }
    delete newStruct->bob;
    delete newStruct;

    return 0;
}


// struct someStruct {
//     int num1;
//     int num2;
//     string someChar;
// };

// // template <class T1, class T2>
// struct Points {
//     int x;
//     int y;
// };

// // void promptXY(Points&);
// Points promptXY();
// string printPoint(Points);
// double calcDistance(Points&, Points&);

// int main(int argc, char *argv[]) {
//     double distance;
//     Points point1;
//     Points point2;

//     // promptXY(point1);
//     // promptXY(point2);
//     point1 = promptXY();
//     point2 = point1;
//     // point2 = promptXY();

//     // printPoint(point1);
//     // printPoint(point2);

//     distance = calcDistance(point1, point2);
//     // cout << "Distance: " << distance << endl;
//     cout << "The distance between points " 
//          << printPoint(point1) << " and " 
//          << printPoint(point2) 
//          << " is " << distance << "." << endl;

//     // delete point1;
//     // delete point2;

//     return 0;
// }

// string printPoint(Points point) {
//     char outputString[16];

//     string printoutString;

//     printoutString = "(" + to_string(point.x) + ", " + to_string(point.y) + ")";
//     sprintf(outputString, "(%d, %d)", point.x, point.y);
//     cout << "DEBUG: outputString: " << outputString << endl;


//     // stringstream ss;

//     // ss << "(" 
//     //      << point.x << ", " 
//     //      << point.y << ")";

//     // // ss >> printoutString;
//     // getline(ss, printoutString);

//     // cout << "DEBUG: printoutString: " << printoutString << endl;

//     return printoutString;
// }

// double calcDistance(Points &point1, Points &point2) {
//     double distance;
//     distance = sqrt(pow(point1.x - point2.x, 2) + pow(point1.y - point2.y, 2));
//     return distance;
// }

// // void promptXY(Points &newPoint) {
// Points promptXY() {
//     Points newPoint;
//     char ch;
//     cout << "Please enter a coordinate in the form (x, y): ";
//     cin >> ch >> newPoint.x >> ch >> newPoint.y >> ch;
//     // cout << "DEBUG: newPoint.x: " << newPoint.x << endl;
//     // cout << "DEBUG: newPoint.y: " << newPoint.y << endl;
//     return newPoint;
// }



















    // Points point1;
    // Points point2;
    // Points myPoints[2];

    // myPoints[1] = point2;

    // point1.x = 0;
    // point1.y = 0;
    // myPoints[0] = point1;

    // myPoints[1].x = 1;
    // myPoints[1].y = 1;

    // distance = sqrt(pow((myPoints[0].x - myPoints[1].x), 2) + pow((myPoints[0].y - myPoints[1].y), 2));

    // cout << "The distance is: " << distance << endl;

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
