/*
Name: Jeremy Bergen

Kattis Fifty Shades of Pink
*/
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    int numLines;
    int total = 0;

    cin >> numLines;
    cin.get();

    string buttons[numLines];

    for(int i = 1; i <= numLines; i++) {
        // cout << "DEBUG: i: " << i << endl;
        string tmpStr;
        getline(cin, tmpStr);
        // cout << "DEBUG: tmpStr: " << tmpStr << endl;
        for(size_t j = 0; j < tmpStr.length(); j++) {
            buttons[i-1] += tolower(tmpStr[j]);
        }
    }

    // for(int i = 0; i < numLines; i++) {
    //     cout << buttons[i] << endl;
    // }

    for(int i = 0; i < numLines; i++) {
        if(buttons[i].find("pink") != string::npos || buttons[i].find("rose") != string::npos) {
            total++;
        }
    }

    if(total == 0) {
        cout << "I must watch Star Wars with my daughter" << endl;
    } else {
        cout << total << endl;
    }

    return 0;
}