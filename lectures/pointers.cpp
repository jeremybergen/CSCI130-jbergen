/*
Name: Jeremy Bergen

Pointers!!!!!!!!!!! YAY!!!!!!!!
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// void printName(string&);

int main(int argc, char *argv[]) {
    int tableSize;
    int padding;
    int *ptr;

    tableSize = 42;
    padding = 21;
    ptr = &tableSize;

    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    // cout << &padding << endl;
    // int padding;
    // int *bob;
    // int **ptr2;
    // int ***ptr3;
    // int ****ptr4;

    // bob = &tableSize;
    // ptr2 = &bob;
    // ptr3 = &ptr2;
    // ptr4 = &ptr3;
    // tableSize = 42;

    // cout << tableSize << endl;
    // cout << **(&bob) << endl;
    // cout << ***(&ptr2) << endl;
    // cout << ***ptr3 << endl;
    // cout << ****ptr4 << endl;

    // cout << &tableSize << endl;
    // cout << *(&tableSize) << endl;
    // cout << "tableSize: " << tableSize << endl;
    // cout << "*ptr: " << **(&ptr) << endl;

    // tableSize = 12;

    // cout << setw(20) << setfill('-') << "" << endl;
    // cout << "tableSize: " << tableSize << endl;
    // cout << "*ptr: " << *ptr << endl;

    // ptr = &padding;
    // *ptr = 9001;

    // cout << setw(20) << setfill('-') << "" << endl;
    // cout << "tableSize: " << tableSize << endl;
    // cout << "*ptr: " << *ptr << endl;

    // cout << "tableSize: " << tableSize << endl;
    // cout << "&tableSize: " << &tableSize << endl;
    // cout << "&ptr: " << &ptr << endl;
    // cout << "ptr: " << ptr << endl;
    // cout << "*ptr: " << *ptr << endl;

    // string myName;
    // string firstName;
    // int tableSize;
    // int padding;

    // cout << "main myName: " << &myName << endl;

    // printName(myName);

    // tableSize = 42;

    // cout << tableSize << endl;

    // cout << &tableSize << endl;
    // cout << &padding << endl;
    // cout << &myName << endl;
    // cout << &firstName << endl;

    return 0;
}

// void printName(string &myName) {
//     cout << "printName(myName): " << &myName << endl;
// }