/*
Name: Jeremy Bergen

C++ Functions...Cool...
*/
#include <iostream>
#include <string>

using namespace std;

int addTwo() {
    int num1;
    
    cout << "Please enter a number: ";
    cin >> num1;

    return num1 + 2;
}



void sayHello(string fName, string lName, int n1) {
    cout << "Hello " << fName << " " << lName << endl;
    // string name;

    // cout << "Please enter your first name: ";
    // cin >> name;

    // cout << "Hello " << name << endl;
    // cout << "Hello New World" << endl;
    // cout << "Another line" << endl;
}

string getName() {
    string firstName;

    cout << "Please enter your first name: ";
    cin >> firstName;

    sayHello(firstName, "Bergen", 42);

    return firstName;
}

int addNums(int n1, int n2) {
    // cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
    return n1 + n2;
}

int main() {
    string yourName;
    int total;
    
    yourName = getName();

    sayHello(yourName, "Skywalker", 0);

    total = addNums(42, 15);

    cout << "Your total is: " << total << endl;

    return 0;
}

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
