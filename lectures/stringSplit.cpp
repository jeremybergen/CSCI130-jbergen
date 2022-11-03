/*
Name: Jeremy Bergen

String Splitting
*/
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char *argv[]) {
    string inputString = "Jeremy,Bergen,Assistant Professor,CH 336";
    string data[4];
    // string fName;
    // string lName;
    // string title;
    // string office;
    int counter = 0;
    string tmpString;

    stringstream iss(inputString);
    while(getline(iss, tmpString, ',')) {
        data[counter] = tmpString;
        counter++;
    }
    // getline(iss, tmpString, ',');
    // cout << tmpString << endl;
    // getline(iss, tmpString, ',');
    // cout << tmpString << endl;
    // getline(iss, tmpString, ',');
    // cout << tmpString << endl;
    // getline(iss, tmpString, ',');
    // cout << tmpString << endl;

    // for (int i = 0; i < inputString.length(); i++) {
    //     if (inputString[i] != ',') {
    //         data[counter] += inputString[i];
    //     } else {
    //         counter++;
    //     }
    // }

    for(int i = 0; i <= counter; i++) {
        cout << data[i] << endl;
    }


    return 0;
}