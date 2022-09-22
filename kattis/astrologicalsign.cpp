/*
Name: Jeremy Bergen

Kattis Astrological Sign
*/
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

void printSign(int);

int main(int argc, char *argv[]) {
    int lines, day;
    string month;

    cin >> lines;
    printSign(lines);

    return 0;
}

void printSign(int lines) {
    int day;
    string month;

    if (lines > 0) {
        cin >> day >> month;

        if (month == "Jan") {
            if (day <= 20) {
                cout << "Capricorn" << endl;
            } else {
                cout << "Aquarius" << endl;
            }
        } else if (month == "Feb") {
            if (day <= 19) {
                cout << "Aquarius" << endl;
            } else {
                cout << "Pisces" << endl;
            }
        } else if (month == "Mar") {
            if (day <= 20) {
                cout << "Pisces" << endl;
            } else {
                cout << "Aries" << endl;
            }
        } else if (month == "Apr") {
            if (day <= 20) {
                cout << "Aries" << endl;
            } else {
                cout << "Taurus" << endl;
            }   
        } else if (month == "May") {
            if (day <= 20) {
                cout << "Taurus" << endl;
            } else {
                cout << "Gemini" << endl;
            }
        } else if (month == "Jun") {
            if (day <= 21) {
                cout << "Gemini" << endl;
            } else {
                cout << "Cancer" << endl;
            }
        } else if (month == "Jul") {
            if (day <= 22) {
                cout << "Cancer" << endl;
            } else {
                cout << "Leo" << endl;
            }
        } else if (month == "Aug") {
            if (day <= 22) {
                cout << "Leo" << endl;
            } else {
                cout << "Virgo" << endl;
            }
        } else if (month == "Sep") {
            if (day <= 21) {
                cout << "Virgo" << endl;
            } else {
                cout << "Libra" << endl;
            }
        } else if (month == "Oct") {
            if (day <= 22) {
                cout << "Libra" << endl;
            } else {
                cout << "Scorpio" << endl;
            }
        } else if (month == "Nov") {
            if (day <= 22) {
                cout << "Scorpio" << endl;
            } else {
                cout << "Sagittarius" << endl;
            }
        } else {
            if (day <= 21) {
                cout << "Sagittarius" << endl;
            } else {
                cout << "Capricorn" << endl;
            }
        }
        lines--;
        printSign(lines);
    }

}