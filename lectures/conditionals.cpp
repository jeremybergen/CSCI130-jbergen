/*
Name: Jeremy Bergen

Conditionals
*/
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

void readNumber(int&);
int addToNum(int);

int main(int argc, char *argv[]) {
    int num1;
    int result;
    readNumber(num1);

    // cout << "DEBUG: num1 is: " << num1 << endl;
    // cout << "DEBUG: addToNum(num1) is: " << addToNum(num1) << endl;
    result = addToNum(num1);
    if (result > 0) {
        cout << num1 << " + 1 is positive" << endl;
    } else if (result < 0) {
        cout << num1 << " + 1 is negative" << endl;
    } else {
        cout << num1 << " + 1 is zero" << endl;
    }

    // if (num1 > 0) {
    //     cout << "num1 is positive" << endl;
    //     // cout << "Inside if" << endl;
    //     // cout << "The numbers are equal" << endl;
    // } else {
    //     if (num1 < 0) {
    //         cout << "num1 is negative" << endl;
    //     } else {
    //         cout << "num1 is zero" << endl;
    //     }
    //     cout << "Inside of first else" << endl;
    //     // cout << "num1 is negative or zero" << endl;
    // }

    // if (num1 < 0) {
    //     cout << "num1 is negative" << endl;
    // }

    // if (num1 == 0) {
    //     cout << "num1 is zero" << endl;
    // }

    cout << "Outside of if" << endl;
    // int num1, num2;
    // num1 = 42;
    // num2 = 42;

    // cout << boolalpha << (num1 == num2) << endl;
    // cout << (num1 != num2) << endl;
    // cout << (num1 <= num2) << endl;
    // cout << (num1 >= num2) << endl;

    return 0;
}

void readNumber(int &bob) {
    cout << "Please enter a whole number: ";
    cin >> bob;
}

int addToNum(int a) {
    a++;
    return a;
}