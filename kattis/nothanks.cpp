/*
Name: Jeremy Bergen

Kattis no thanks
*/
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int numberOfNumbers;

    cin >> numberOfNumbers;

    int numbers[numberOfNumbers];

    for(size_t i = 0; i < numberOfNumbers; i++) {
        cin >> numbers[i];
    }

    // for(size_t i = 0; i < numberOfNumbers; i++) {
    //     cout << numbers[i] << " ";
    // }
    // cout << endl;

    return 0;
}