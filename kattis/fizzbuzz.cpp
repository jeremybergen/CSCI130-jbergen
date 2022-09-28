/*
Name: Jeremy Bergen

Kattis Judging Moose
*/
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    int x, y, n;

    cin >> x >> y >> n;

    for (int i = 1; i <= n; i++) {
        bool multiple = false;
        if (i%x == 0) {
            cout << "Fizz";
            multiple = true;
        }

        if (i%y == 0) {
            cout << "Buzz";
            multiple = true;
        }

        if (!multiple) {
            cout << i;
        }

        cout << endl;


        // if (i%x == 0 && i%y == 0) {
        //     cout << "FizzBuzz" << endl;
        // } else if (i%x == 0) {
        //     cout << "Fizz" << endl;
        // } else if (i%y == 0) {
        //     cout << "Buzz" << endl;
        // } else {
        //     cout << i << endl;
        // }
        // cout << i << endl;
    }

    return 0;
}