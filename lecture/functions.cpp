/*
Name: Jeremy Bergen

Functions
*/
#include <iostream>

using namespace std;

// void sayGoodbye();
// void sayHello();

// template <class T1, class T2, class T3>
// T1 addNums(T2, T3);

// int addNums(int, int);
// float addNums(float, float);
// float addNums(int, float);
// float addNums(float, int);
// int subNums(int, int);
// int multiplyNums(int, int);
// float avgNums(int, int);

void printNums(int&, int&);
// void getNums(int&, int&);

int main()
{
    int num1 = 0, num2 = 0;

    // getNums(num1, num2);

    // cout << "num1: " << num1 << " num2: " << num2 << endl;
    num1 = 42;
    num2 = 15;
    cout << "In main: &num1: " << &num1 << endl;
    cout << "In main: &num2: " << &num2 << endl;
    printNums(num1, num2);
    cout << "In main: num1: " << num1 << " num2: " << num2 << endl; 

    cout << "This is a string with a \"" << endl;

    return 0;
}

// void getNums(int& n1, int& n2)
// {
//     cout << "Enter two numbers separated by a space: ";
//     cin >> n1 >> n2;
// }

void printNums(int& bob, int& steve)
{
    cout << "In func: &num1: " << &bob << endl;
    cout << "In func: &num2: " << &steve << endl;
    bob = 1000;
    steve = 2000;
    cout << "In func: num1: " << bob << " num2: " << steve << endl; 
}






    // float num1;
    // int num2;
    // float result;

    // cout << "Enter two numbers separated by a space: ";
    // cin >> num1 >> num2;

    // result = addNums<float, float, int>(num1, num2);
    // cout << num1 << " + " << num2 << " = " << result << endl;
    // sayHello();
    // sayGoodbye();
// template <class T1, class T2, class T3>
// T1 addNums(T2 n1, T3 n2)
// {
//     return n1 + n2;
// }

// int addNums(int n1, int n2)
// {
//     cout << "inside int function" << endl;
//     return n1 + n2;
// }

// float addNums(float n1, float n2)
// {
//     cout << "inside float function" << endl;
//     return n1 + n2;
// }

// float addNums(int n1, float n2)
// {
//     cout << "inside int/float function" << endl;
//     return n1 + n2;
// }

// float addNums(float n1, int n2)
// {
//     cout << "inside int/float function" << endl;
//     return n1 + n2;
// }

// int subNums(int n1, int n2)
// {

// }
// int multiplyNums(int bob, int steve)
// {

// }
// float avgNums(int starwars, int startrek)
// {

// }



// void sayHello()
// {
//     cout << "Hello" << endl;
//     sayGoodbye();
// }

// void sayGoodbye()
// {
//     cout << "Goodbye" << endl;
//     sayHello();
// }










    // sayHello("Jeremy");
    // int answer;
    // int num1, num2;

    // cout << "Please enter two numbers separated by a space: ";
    // cin >> num1 >> num2;

    // answer = addNums(num1, num2, "", ' ');
    // cout << num1 << " + " << num2 << " = " << answer << endl;
    // cout << "Press enter to quit";
    // cin.get();
    // cin.get();

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





// void sayHello(string name)
// {
//     string lName;
//     cout << "Enter your last name: ";
//     cin >> lName;
//     cout << "Hello " << name << " " << lName << endl;
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

// int addNums(int num1, int num2, string name, char someCh)
// {
//     int result;
//     result = num1 + num2;
//     num1 = 10000;
//     num2 = 20000;
//     return result;
// }
