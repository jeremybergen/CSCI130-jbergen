/*
Name: Jeremy Bergen

Logical Conditionals
*/
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

enum Suits{club=10, diamond=20, heart=30, spade=40};

int main(int argc, char *argv[]) {
    // char num1;

    // cout << "Please enter a char: ";
    // cin >> num1;

    Suits myCard = Suits::heart;

    switch(myCard) {
        case club:
            cout << "Case 1\n";
            break;
        case diamond:
            cout << "Case 2\n";
            break;
        case heart:
            cout << "Case 3\n";
            break;
        case spade:
            cout << "Case 4\n";
            break;
        default:
            cout << "Default case\n";
    }

    // if (num1 == 1) {
    //     cout << "Case 1\n";
    // } else if (num1 == 2) {
    //     cout << "Case 2\n";
    // } else if (num1 == 3) {
    //     cout << "Case 3\n";
    // } else {
    //     cout << "Default case\n";
    // }

    // string hasFerrari;
    // int savings;

    // cout << "Do you have a Ferrari? ";
    // cin >> hasFerrari;

    // cout << "How much do you have saved? ";
    // cin >> savings;

    // if (!((hasFerrari == "y" || hasFerrari == "yes") && savings >= 10)) {
    // //     not y and not yes           or       not >=10
    //     cout << "You can retire!!!!" << endl;
    // } else {
    //     cout << "Back to work..." << endl;
    // }

    // int num1;
    // // int num2;

    // cout << "Please enter a number: ";
    // cin >> num1;

    // if (num1 > 0 && num1 % 2 == 0) {
    //     cout << "num1 is positive and even" << endl;
    // } else {
    //     cout << "num1 is not" << endl;
    // }

    // if (num1 > 0) {
    //     if (num1 % 2 == 0) {
    //         cout << "num1 is positive and even" << endl;
    //     } else {
    //     cout << "num1 is not" << endl;
    //     }
    // } else {
    //     cout << "num1 is not" << endl;
    // }

    // num1 = -42;
    // num2 = 43;

    // if (num1 > num2 || num1 > 0) {
    //     cout << "num1 is positive and greater than num2" << endl;
    // }

    return 0;
}