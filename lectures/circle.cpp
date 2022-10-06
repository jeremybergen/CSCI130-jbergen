/*
Name: Jeremy Bergen

Circle calculator
*/
#include <cmath>
#include <string>
#include <iostream>
#include <cassert>
#include <iomanip>

using namespace std;

void greetUser(string*);
string* promptName();
double getRad();

template <class T1>
T1* calcArea(T1*);

int main(int argc, char *argv[]) {
    string *name;
    double *radius = new double();
    double *circleArea;

    name = promptName();
    greetUser(name);
    *radius = getRad();
    circleArea = calcArea<double>(radius);

    cout << "DEBUG: circleArea=" << *circleArea << endl;

    delete name;
    delete radius;
    delete circleArea;

    return 0;
}

template <class T1>
T1* calcArea(T1 *radius) {
    T1 *area = new T1;

    *area = M_PI * pow(*radius, 2);

    return area;
}

double getRad() {
    double radius;

    do {
        cout << "Please enter the radius: ";
        cin >> radius;

        // if (radius <=0) {
        //     cout << "Your radius must be greater than 0" << endl;
        // }
        if (radius > 0) {
            return radius;
        }
        cout << "Your radius must be greater than 0, stupid" << endl;
    } while(true);

}

void greetUser(string *fullName) {
    cout << "Welcome to my circle calculator, " 
         << *fullName << endl;
}

string* promptName() {
    string *fullName = new string();
    cout << "Please enter your first name: ";
    cin >> *fullName;
    return fullName;
}