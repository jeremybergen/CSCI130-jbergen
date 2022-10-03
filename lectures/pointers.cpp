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
    int stackNum1;
    int stackNum2;
    int *stackPtr1;
    int *stackPtr2;
    int *heapPtr1;
    int *heapPtr2 = new int();

    heapPtr1 = new int;
    stackPtr1 = &stackNum1;
    stackPtr2 = &stackNum2;

    *stackPtr1 = 42;
    *heapPtr1 = 15;

    cout << &(*stackPtr1) << endl;
    cout << stackPtr1 << endl;
    cout << &(*stackPtr2) << endl;
    cout << &(*heapPtr1) << endl;
    cout << heapPtr1 << endl;
    cout << &(*heapPtr2) << endl;

    delete heapPtr1;
    delete heapPtr2;
    // cout << "stackPtr1: " << stackPtr1 << endl;
    // cout << "stackPtr2: " << stackPtr2 << endl;
    // cout << "heapPtr1: " << heapPtr1 << endl;
    // cout << "heapPtr2: " << heapPtr2 << endl;



    // int num1;
    // int num2, num3, num4;
    // int *ptr;

    // ptr = &num1;

    // ptr = nullptr;
    // ptr = NULL;
    // ptr = __null;

    // if (ptr == nullptr) {
    //     cout << "Not pointing anywhere" << endl;
    // }

    // num1 = 42;
    // num2 = 15;
    // num3 = 9000;
    // num4 = -5;

    // cout << "&num1: " << &num1 << endl;
    // cout << "&num2: " << &num2 << endl;
    // cout << "&num3: " << &num3 << endl;
    // cout << "&num4: " << &num4 << endl;

    // cout << "-----------" << endl;
    // cout << *ptr << endl;
    // ptr = ptr + 3;
    // cout << *ptr << endl;
    // ptr++;
    // cout << *ptr << endl;
    // ptr++;
    // cout << *ptr << endl;
    // ptr--;
    // cout << *ptr << endl;
    // ptr--;
    // cout << *ptr << endl;
    // ptr--;
    // cout << *ptr << endl;

    

    // *ptr = 42;
    // (*ptr)++;
    // num1++;

    // cout << num1 << endl;
    // cout << *ptr << endl;


    return 0;
}

// void printName(string &myName) {
//     cout << "printName(myName): " << &myName << endl;
// }


    // int tableSize;
    // int padding;
    // int *ptr;

    // tableSize = 42;
    // padding = 21;
    // ptr = &tableSize;

    // cout << *ptr << endl;
    // ptr++;
    // cout << *ptr << endl;
    // ptr++;
    // cout << *ptr << endl;
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
