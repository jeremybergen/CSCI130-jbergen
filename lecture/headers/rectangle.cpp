#include "rectangle.h"
#include <iostream>

using namespace std;

void getSides(int& s1, int& s2)
{
    while(true){
        cout << "Please enter side 1: ";
        if(cin >> s1)
        {
            break;
        }
        cout << "You didn't enter a whole number" << endl;
        cin.clear();
        std::cin.ignore(1);
    }
    while(true){
        cout << "Please enter side 2: ";
        if(cin >> s2)
        {
            break;
        }
        cout << "You didn't enter a whole number" << endl;
        cin.clear();
        std::cin.ignore(1);
    }
}
int calcPerim(const int& s1, const int& s2)
{
    return 2*s1 + 2*s2;
}
int calcArea(const int& s1, const int& s2)
{
    return s1*s2;
}
void printVals(const int s1, const int s2, const int perim, const int area)
{
    cout << "Your rectangle with sides " << s1 << " and " << s2
         << " has a perimeter of: " << perim
         << " and an area of: " << area << endl;
}
