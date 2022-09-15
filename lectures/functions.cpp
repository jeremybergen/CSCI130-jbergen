/*
Name: Jeremy Bergen

C++ Functions...Cool...
*/
#include <iostream>
#include <string>

using namespace std;

void someFunc(int&);

int main() {
    int myNum;

    myNum = 42;

    cout << "myNum is: " << &myNum << endl;
    someFunc(myNum);
    // cout << "myNum is: " << myNum << endl;

    // sayGoodbye();
    // cout << "42 + 15 = " << addNums(42, 15) << endl;

    return 0;
}

void someFunc(int &bob) {
    cout << "myNum is: " << &bob << endl;
    bob++;
    // myNum = myNum + 1;
    // myNum += 1;
}

// int addNums(int n1, int n2) {
//     int total;

//     total = n1 + n2;

//     return total;
// }

// void sayHello() {
//     cout << "Hello" << endl;
//     sayGoodbye();
// }

// void sayGoodbye() {
//     cout << "Goodbye" << endl;
//     sayHello();
// }

// void sayHello();
// void sayGoodbye();
// int addNums(int, int);
// int addTwo() {
//     int num1;
    
//     cout << "Please enter a number: ";
//     cin >> num1;

//     return num1 + 2;
// }



// void sayHello(string fName, string lName, int n1) {
//     cout << "Hello " << fName << " " << lName << endl;
//     // string name;

//     // cout << "Please enter your first name: ";
//     // cin >> name;

//     // cout << "Hello " << name << endl;
//     // cout << "Hello New World" << endl;
//     // cout << "Another line" << endl;
// }

// string getName() {
//     string firstName;

//     cout << "Please enter your first name: ";
//     cin >> firstName;

//     sayHello(firstName, "Bergen", 42);

//     return firstName;
// }

// int addNums(int n1, int n2) {
//     // cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
//     return n1 + n2;
// }

    // string yourName;
    // int total;
    
    // yourName = getName();

    // sayHello(yourName, "Skywalker", 0);

    // total = addNums(42, 15);

    // cout << "Your total is: " << total << endl;

    // string firstName;
    // int myNum;
    // firstName = sayHello();
    // cout << "Hello again " << firstName << endl;

    // myNum = addTwo();
    // cout << "Your number plus 2 is: " << myNum << endl;
    // sayHello();
    // sayHello();
    // sayHello();
    // sayHello();

    // cout << "Hello New World" << endl;
    // cout << "Hello New World" << endl;
    // cout << "Hello New World" << endl;
    // cout << "Hello New World" << endl;
    // cout << "Hello New World" << endl;
