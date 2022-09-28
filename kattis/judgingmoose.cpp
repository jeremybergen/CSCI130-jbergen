/*
Name: Jeremy Bergen

Kattis Judging Moose
*/
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    int l, r;

    cin >> l >> r;

    if (l == r && l == 0) {
        cout << "Not a moose" << endl;
        return 0;
    }

    if (l == r) {
        cout << "Even " << 2*l << endl;
    } else if (l < r) {
        cout << "Odd " << 2*r << endl;
    } else {
        cout << "Odd " << 2*l << endl;
    }

    return 0;
}