/*
Name: Jeremy Bergen

Arrays!!!
*/
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    size_t arrSize = 5;
    cout << "How many numbers do you want? ";
    cin >> arrSize;
    string numbers[arrSize];

    // numbers[0] = 42;
    // numbers[1] = 15;
    // numbers[2] = 9000;
    // numbers[3] = 23;
    // numbers[4] = -8;
    // numbers[5] = 10;
    // cout << "Enter a number: ";
    // cin >> numbers[0];
    // cout << "Enter a number: ";
    // cin >> numbers[1];
    // cout << "Enter a number: ";
    // cin >> numbers[2];
    // cout << "Enter a number: ";
    // cin >> numbers[3];
    // cout << "Enter a number: ";
    // cin >> numbers[4];
    for(size_t i = 0; i < arrSize; i++)
    {
        cout << "Enter a number: ";
        cin >> numbers[i];
        
    }

    for(size_t i = 0; i < arrSize; i++)
    {
        // cout << "numbers[" << i << "]: " 
        //      << numbers[i] << endl;
        cout << numbers[i] << " ";
        if(i == arrSize - 1)
        {
            cout << endl;
        }
    }
    // cout << endl;
    // cout << "numbers[0]: " << numbers[0] << endl;
    // cout << "numbers[1]: " << numbers[1] << endl;
    // cout << "numbers[2]: " << numbers[2] << endl;
    // cout << "numbers[3]: " << numbers[3] << endl;
    // cout << "numbers[4]: " << numbers[4] << endl;
    // cout << "numbers[5]: " << numbers[5] << endl;

    // string someStrings[100];
    // int* numPtrs[100];
    // int** moreNumPtrs[100];

    // int arrSize = 10;
    // // int moreNumbers[arrSize];

    // cout << "How many numbers do you want? ";
    // cin >> arrSize;
    // int moreNumbers[arrSize];
    

    return 0;
}