/*
Name: Jeremy Bergen

Pointers!!!!!!!!!!! YAY!!!!!!!!
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// void printName(string&);
void addNums(int*, int*, int*);
int addition(int, int);
float subtraction(float, float);
void calcNums(int, int, int*);

int main(int argc, char *argv[]) {
    int (*add)(int, int) = addition;
    float (*sub)(float, float) = subtraction;

    calcNums(42, 15, add);

    // cout << addition(42, 15) << endl;
    // cout << (*add)(10, 5) << endl;

    // cout << subtraction(42.5, 15.7) << endl;
    // cout << (*sub)(10.5, 12.123) << endl;

    // int num1;
    // int *ptr1;
    // int *num2 = new int();
    // int *answer = new int;

    // ptr1 = &num1;

    // cout << "Please enter two numbers separated by a space: ";
    // cin >> *ptr1 >> *num2;

    // // cout << "ptr1: " << ptr1 << endl;
    // // cout << "num2: " << num2 << endl;
    // // answer = addNums(ptr1, num2);
    // addNums(ptr1, num2, answer);

    // // cout << "answer: " << answer << endl;
    
    // cout << *ptr1 << " + " << *num2 << " = " << *answer << endl;
    // // 42 + 15 = 57
    // printf("%d + %d = %d\n", *ptr1, *num2, *answer);

    // delete num2;
    // delete answer;

    // addition(42);

    return 0;
}

void calcNums(int a, int b, int (*func)(int, int)) {
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << (*func)(a, b) << endl;
}

float subtraction(float a, float b) {
    return (a - b);
}

int addition(int n1, int n2) {
    return (n1 + n2);
    // n1++;
    // cout << "inside addition" << endl;
}

void addNums(int* n1, int *n2, int * answer) {
    // int result;

    *answer = *n1 + *n2;

    // return result;
    // cout << "n1: " << n1 << endl;
    // cout << "n2: " << n2 << endl;
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




    // int stackNum1;
    // int stackNum2;
    // int *stackPtr1;
    // int *stackPtr2;
    // int *heapPtr1;
    // int *heapPtr2 = new int();

    // heapPtr1 = new int;
    // stackPtr1 = &stackNum1;
    // stackPtr2 = &stackNum2;

    // *stackPtr1 = 42;
    // *heapPtr1 = 15;

    // cout << &(*stackPtr1) << endl;
    // cout << stackPtr1 << endl;
    // cout << &(*stackPtr2) << endl;
    // cout << &(*heapPtr1) << endl;
    // cout << heapPtr1 << endl;
    // cout << &(*heapPtr2) << endl;

    // delete heapPtr1;
    // delete heapPtr2;
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



    // int someNumber;
    // int *ptr1;
    // int *ptr2 = new int;
    // int *ptr3 = new int();

    // ptr1 = &someNumber;

    // *ptr3 = 42;
    // cout << "*ptr3 = " << *ptr3 << endl;
    // cout << ptr3 << endl;

    // delete ptr2;
    // delete ptr3;

    // cout << ptr3 << endl;