/*
Name: Jeremy Bergen

Strings
*/
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    // char firstName[] = "JeremyBergen";
    string fName = "Jeremy Bergen";
    size_t foundIndex;
    
    foundIndex = fName.find('e', 12);

    if (foundIndex != string::npos) {
        cout << "Character found at index: " 
             << foundIndex << endl;
    } else {
        cout << "Character not found in string" << endl;
    }
    


    // string lName = "Bergen";

    // // string fullName = fName + " " + lName;
    // fName += " ";
    // fName += lName;

    // cout << sizeof(fName) << endl;
    // cout << fName.at(0) << endl;
    // cout << fName[0] << endl;

    // for (size_t i = 0; i < fName.length(); i++) {
    //     if (fName[i] == 'e') {
    //         cout << "e found at index: " << i << endl;
    //         break;
    //     } else if (i == fName.length()-1) {
    //         cout << "Character not found" << endl;
    //     }
    // }

    // cout << firstName << endl;
    // cout << fullName << endl;
    return 0;
}