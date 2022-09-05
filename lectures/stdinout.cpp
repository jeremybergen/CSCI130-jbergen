/*
Name: Jeremy Bergen

Learning about cin and cout
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    int num1, num2;
    char opp;

    cout << "Please enter two numbers and an operator: ";
    cin >> num1 >> num2 >> opp;

    // cout << "Please enter another number: ";
    // cin >> num2;

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    cout << num1 << " - " << num2
         << " = " << num1 - num2 << endl;
    return 0;
}


    // string firstName = "Jeremy";
    // cout << "Hello my name is Jeremy" << endl
    //      << "This is a second line" << endl 
    //      << "This is a third line" << endl;

    // cout << "Hello my name is Jeremy\nThis is a second line\nThis is a third line\n";
