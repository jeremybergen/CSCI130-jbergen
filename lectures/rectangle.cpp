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

void promptName(string*);
void greetUser(string*);
void promptSides(double*, double*);

template <class T1, typename type2>
T1 calcArea(T1*, type2*);

double* calcPerim(double*, double*);
void printResults(double*, double*, double*, double*);

int main() {
    string *myName = new string();
    double *side1 = new double;
    double *side2 = new double();
    double *area = new double();
    double *perimeter = NULL;

    promptName(myName);
    greetUser(myName);
    promptSides(side1, side2);
    *area = calcArea<double, double>(side1, side2);

    // cout << "Inside main" << endl;
    // cout << "DEBUG: *perimeter: " << perimeter << endl;
    perimeter = calcPerim(side1, side2);
    // cout << "Inside main" << endl;
    // cout << "DEBUG: *perimeter: " << perimeter << endl;
    printResults(side1, side2, area, perimeter);

    delete myName;
    delete side1;
    delete side2;
    delete area;
    delete perimeter;
    return 0;
}

template <class T1, typename type2>
T1 calcArea(T1 *s1, type2 *s2) {
    T1 area = *s1 * *s2;
    return area;
}

void printResults(double *s1, double *s2, double *area, double *perimeter) {
    printf("The rectangle with sides %.2f and %.2f\nHas an area of %.2f\nand a perimeter of %.2f\n", *s1, *s2, *area, *perimeter);
}

double* calcPerim(double *s1, double *s2) {
    double *perimeter = new double();

    *perimeter = 2 * (*s1 + *s2);
    // cout << "Inside calcPerim" << endl;
    // cout << "DEBUG: *perimeter: " << perimeter << endl;

    return perimeter;
}


void promptSides(double *side1, double * side2) {
    cout << "Please enter two sides of a rectangle: ";
    cin >> *side1 >> *side2;
}

void promptName(string* firstName) {
    cout << "Please enter your first name: ";
    getline(cin, *firstName);
}

void greetUser(string* name) {
    cout << "Welcome to my rectangle calculator, " 
         << *name << endl;
}




    // // grabbed https://stackoverflow.com/questions/903221/press-enter-to-continue
    // cout << "Press enter to exit\n";
    // cin.ignore();
    // string fullName;
    // unsigned int side1, side2;
    // unsigned int area, perimeter;

    // // step 1: prompt user for name
    // cout << "Please enter your full name: ";
    // getline(cin, fullName);
    
    // // step 2: greet user
    // cout << "Hello " << fullName << endl;

    // // step 7: prompt for sides of a rectangle
    // cout << "Please enter side 1: ";
    // cin >> side1;

    // cout << "Please enter side 2: ";
    // cin >> side2;

    // // cout << "DEBUG: side1: " << side1 << endl;
    // // cout << "DEBUG: side2: " << side2 << endl;

    // // step 8: calculate area
    // area = side1 * side2;

    // // step 9: calculate the perimeter
    // perimeter = (2 * side1) + (2 * side2);

    // // cout << "DEBUG: area: " << area << endl;
    // // cout << "DEBUG: perimeter: " << perimeter << endl;

    // // step 10: print area and perimeter
    // cout << "The rectangle with sides "
    //      << side1 << " and " << side2
    //      << " has an area of " << area
    //      << " and a perimeter of " << perimeter << endl;

    // // cout << area << endl << perimeter << endl;
