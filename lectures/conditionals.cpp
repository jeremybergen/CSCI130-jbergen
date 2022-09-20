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
char checkGrade(int);

int main(int argc, char *argv[]) {
    int num1;
    int result;
    char gradeLetter;
    readNumber(num1);

    if (num1 > 0) {
        cout << "num1 is positive" << endl;
    } else {
        cout << "num1 is negative" << endl;
    }

    (num1 > 0) ? cout << "num1 is positive" << endl : cout << "num1 is negative" << endl;

    // gradeLetter = checkGrade(num1);

    // if (gradeLetter == 'A') {
    //     cout << "You got an " << gradeLetter << endl;
    // } else if (gradeLetter == 'F') {
    //     cout << "You got an " << gradeLetter << endl;
    // } else {
    //     cout << "You got a " << gradeLetter << endl;
    // }

    // if (num1 < 60) {
    //     cout << "You got an F" << endl;
    // } else if (num1 >= 90) {
    //     cout << "You got an A" << endl;
    // } else if (num1 >= 80) {
    //     cout << "You got a B" << endl;
    // } else if (num1 >= 70) {
    //     cout << "You got a C" << endl;
    // } else if (num1 >= 60) {
    //     cout << "You got a D" << endl;
    // } else {
    //     cout << "Should not get here..." << endl;
    // }

    // if (num1 < 60) {
    //     cout << "You got an F" << endl;
    // } else if (num1 < 70) {
    //     cout << "You got a D" << endl;
    // } else if (num1 < 80) {
    //     cout << "You got a C" << endl;
    // } else if (num1 < 90) {
    //     cout << "You got a B" << endl;
    // } else {
    //     cout << "You got an A" << endl;
    // }

    // if (num1 < 60) {
    //     cout << "You got an F" << endl;
    // } else if (num1 >= 60) {
    //     cout << "You got a D" << endl;
    // } else if (num1 >= 70) {
    //     cout << "You got a C" << endl;
    // } else if (num1 >= 80) {
    //     cout << "You got a B" << endl;
    // } else if (num1 >= 90) {
    //     cout << "You got an A" << endl;
    // } else {
    //     cout << "Should not get here..." << endl;
    // }

    // cout << "DEBUG: num1 is: " << num1 << endl;
    // cout << "DEBUG: addToNum(num1) is: " << addToNum(num1) << endl;
    // result = addToNum(num1);
    // if (result > 0) {
    //     cout << num1 << " + 1 is positive" << endl;
    // } else if (result < 0) {
    //     cout << num1 << " + 1 is negative" << endl;
    // } else {
    //     cout << num1 << " + 1 is zero" << endl;
    // }

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

    // cout << "Outside of if" << endl;
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

char checkGrade(int num1) {
    if (num1 < 60) {
        return 'F';
    } else if (num1 >= 90) {
        return 'A';
    } else if (num1 >= 80) {
        return 'B';
    } else if (num1 >= 70) {
        return 'C';
    } else if (num1 >= 60) {
        return 'D';
    } else {
        return '?';
    }

    return 'A';
}

// char checkGrade(int num1) {
//     // char gradeLetter;
//     if (num1 < 60) {
//         return 'F';
//         // gradeLetter = 'F';
//         // cout << "You got an F" << endl;
//     } else if (num1 >= 90) {
//         return 'A';
//         // gradeLetter = 'A';
//         // cout << "You got an A" << endl;
//     } else if (num1 >= 80) {
//         return 'B';
//         // gradeLetter = 'B';
//         // cout << "You got a B" << endl;
//     } else if (num1 >= 70) {
//         return 'C';
//         // gradeLetter = 'C';
//         // cout << "You got a C" << endl;
//     } else if (num1 >= 60) {
//         return 'D';
//         // gradeLetter = 'D';
//         // cout << "You got a D" << endl;
//     } else {
//         return '?';
//         // gradeLetter = '?';
//         // cout << "Should not get here..." << endl;
//     }

//     return 'A';
//     // return gradeLetter;
// }