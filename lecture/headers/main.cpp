/*
Name: Jeremy Bergen

File Headers
*/
#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
    int side1, side2;
    int perim, area;
    getSides(side1, side2);
    perim = calcPerim(side1, side2);
    area = calcArea(side1, side2);
    printVals(side1, side2, perim, area);

    // cout << "You entered: " << side1 << " and " << side2 << endl;
    return 0;
}

