/*
Name: Jeremy Bergen

Pointers!!!!!!!!!!!!!!
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int* num1;
    num1 = new int;
    string* str1 = new string;
    long* long1 = new long(8888888888);

    *num1 = 42;
    cout << "&num1:\t" << &num1 << endl;
    cout << "num1:\t" << num1 << endl;
    cout << "*num1:\t" << *num1 << endl;

    *str1 = "Jeremy";
    cout << "&str1:\t" << &str1 << endl;
    cout << "str1:\t" << str1 << endl;
    cout << "*str:\t" << *str1 << endl;

    cout << "&long1:\t" << &long1 << endl;
    cout << "long1:\t" << long1 << endl;
    cout << "*long1:\t" << *long1 << endl;

    // int* numbers;
    // numbers = new int[1000000000];

    // for(int i = 0; i < 1000000000; i++)
    // {
    //     numbers[i] = i;
    // }
    // // while(true) {
    // //     continue;
    // // }

    // delete[] numbers;

    // long num1, num2;
    // // long long1;
    // // string str1;
    // // bool bool1;
    // long num3, num4, num5;

    // long* ptr1;
    // // int** ptr2;

    // num1 = 42;
    // num2 = 15;
    // num3 = 9000;
    // num4 = -8;
    // num5 = 83742;

    // cout << "num1: " << num1 << endl;
    // cout << "num2: " << num2 << endl;
    // cout << "num3: " << num3 << endl;
    // cout << "num4: " << num4 << endl;
    // cout << "num5: " << num5 << endl;

    // cout << "&num1: " << &num1 << endl;
    // cout << "&num2: " << &num2 << endl;
    // cout << "&num3: " << &num3 << endl;
    // cout << "&num4: " << &num4 << endl;
    // cout << "&num5: " << &num5 << endl;

    // ptr1 = &num1;
    // // ptr2 = &ptr1;
    // cout << "*ptr1: " << *ptr1 << endl;
    // // cout << "**ptr2: " << **ptr2 << endl;

    // ptr1++;
    // cout << "*ptr1: " << *ptr1 << endl;

    // ptr1++;
    // cout << "*ptr1: " << *ptr1 << endl;

    // ptr1++;
    // cout << "*ptr1: " << *ptr1 << endl;

    // ptr1++;
    // cout << "*ptr1: " << *ptr1 << endl;

    // ptr1--;
    // cout << "*ptr1: " << *ptr1 << endl;
    // ptr1--;
    // cout << "*ptr1: " << *ptr1 << endl;
    // ptr1--;
    // cout << "*ptr1: " << *ptr1 << endl;
    // ptr1--;
    // cout << "*ptr1: " << *ptr1 << endl;

    // ptr1 = ptr1 + 3;
    // cout << "*ptr1: " << *ptr1 << endl;

    // string myString;
    // string* ptr1;

    // myString = "Jeremy";
    // ptr1 = &myString;

    // cout << "myString: " << myString << endl;
    // cout << "ptr1: " << ptr1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;

    // *ptr1 = "Bergen";
    // cout << "myString: " << myString << endl;
    // cout << "*ptr1: " << *ptr1 << endl;
    delete num1;
    delete str1;
    delete long1;
    return 0;
}
















    // int num1;
    // int* ptr1;
    // int** ptr2;
    // int*** ptr3;
    // double* ptr2;
    // void* ptr42;

    // num1 = 42;
    // ptr1 = &num1;
    // ptr2 = &ptr1;
    // // ptr3 = &ptr2;

    // cout << "num1:\t" << num1 << endl;
    // cout << "*ptr1:\t" << *ptr1 << endl;
    // cout << "**ptr2:\t" << **ptr2 << endl;
    // cout << "&num1:\t" << &num1 << endl;
    // cout << "ptr1:\t" << ptr1 << endl;
    // cout << "&ptr1:\t" << &ptr1 << endl;
    // cout << "ptr2:\t" << ptr2 << endl;
    // cout << "&ptr2:\t" << &ptr2 << endl;

    // cout << "num1: " << num1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;

    // cout << "&num1:\t" << &num1 << endl;
    // cout << "ptr1:\t" << ptr1 << endl;
    // cout << "&ptr1:\t" << &ptr1 << endl;
