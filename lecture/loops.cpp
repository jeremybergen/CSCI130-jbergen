/*
Name: Jeremy Bergen

Loops again, and again, and again, and again, and....
*/
#include <iostream>

using namespace std;

int main()
{
    // int someNumber;
    //  init       cond    updater
    for(int i = 0; i < 10; i++)
    {
        if (i > 2)
        {
            continue;
        }
        cout << i << ": Hello World" << endl;
        // someNumber = 42;
        // cout << "Press enter to get the next one";
        // cin.get();
    }

    cout << "after for loop" << endl;

    // cout << someNumber;
    // cout << "Hello World" << endl;
    // cout << "Hello World" << endl;
    // cout << "Hello Whirld" << endl;
    // cout << "Hello Whirld" << endl;
    // cout << "Hello Whirld" << endl;
    // cout << "Hello Whirld" << endl;
    // cout << "Hello Whirld" << endl;
    // cout << "Hello Whirld" << endl;
    // cout << "Hello Whirld" << endl;
    // cout << "Hello Whirld" << endl;
    return 0;
}