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

    cout << fName << endl;
    // fName.clear();
    // fName = "";
    // cout << fName << endl;
    // fName.insert(7, "\"The Almighty Tallest\" ");
    fName.insert(6, 10, '-');
    cout << fName << endl;
    fName.erase(6, 10);
    cout << fName << endl;
    // fName.append(" The Greatest Person in the World!!!");
    fName += " The Greatest Person in the World!!!";
    cout << fName << endl;
    fName.replace(6, 5, "-----");
    cout << fName << endl;
    cout << fName.substr(11, 10) << endl;

    // size_t foundIndex;
    
    // for (auto it = fName.begin(); it != fName.end(); it++) {
    //     cout << *it << endl;
    // }
    // for(size_t i = fName.length()-1; i > 0; i--) {
    //     foundIndex = fName.rfind('a', i);

    //     if (foundIndex != string::npos) {
    //         cout << "Character found at index: " 
    //              << foundIndex << endl;
    //         i = foundIndex;
    //     } else if(i == fName.length()-1) {
    //         cout << "Character not found in string" << endl;
    //         break;
    //     }
    // }
    


    


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