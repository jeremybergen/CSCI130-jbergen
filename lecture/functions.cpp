/*
Name: Jeremy Bergen

Functions
*/
#include <iostream>

using namespace std;


// void sayHello()
// {
//     cout << "Hello World" << endl;
// }

// int addToNumber()
// {
//     int someNumber;
//     int anotherNumber;
//     int result;

//     cout << "Please enter a number: ";
//     cin >> someNumber;

//     cout << "Please enter another number: ";
//     cin >> anotherNumber;
//     // someNumber = 42;
//     result = someNumber + anotherNumber;
//     return result;
// }

// char giveMeAChar()
// {
//     int result;
//     return 74;
// }

// string giveMeAString()
// {
//     int result;
//     return "Jeremy";
// }

int addNums(int num1, int num2, string name, char someCh)
{
    int result;
    result = num1 + num2;
    num1 = 10000;
    num2 = 20000;
    return result;
}

int main()
{
    int answer;
    int num1, num2;

    cout << "Please enter two numbers separated by a space: ";
    cin >> num1 >> num2;

    answer = addNums(num1, num2, "", ' ');
    cout << num1 << " + " << num2 << " = " << answer << endl;
    // int result;
    // result = addToNumber();
    // cout << "addToNumber: " << result << endl;

    // result = addToNumber();
    // cout << "someNumber: " << result << endl;
    // sayHello();
    // sayHello();
    // sayHello();
    // sayHello();
    // sayHello();
    // string someStr;
    // getline(cin, someStr);
    return 0;
}