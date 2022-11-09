/*
Name: Jeremy Bergen

File Structs
*/
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

struct Person {
    string firstName;
    string lastName;
    string department;
    int officeNumber;
};

int main(int argc, char *argv[]) {
    ifstream fin;
    string inputString;
    Person people[100];
    int counter = 0;

    fin.open("files/input.txt");

    while(getline(fin, inputString)) {
        Person newPerson;
        // "Jeremy Bergen CS 336"
        // string tmpString;
        stringstream iss(inputString);

        iss >> newPerson.firstName >> newPerson.lastName >> newPerson.department >> newPerson.officeNumber;

        // cout << "DEBUG: firstName: " << newPerson.firstName << endl;
        // cout << "DEBUG: lastName: " << newPerson.lastName << endl;
        // cout << "DEBUG: department: " << newPerson.department << endl;
        // cout << "DEBUG: officeNumber: " << newPerson.officeNumber << endl << endl;
        people[counter] = newPerson;
        counter++;
        // cout << tmpString << endl;
        // cout << inputString << endl;
    }

    for(int i = 0; i < counter; i++) {
        cout << people[i].department << endl;
    }
    // cout << newPerson.firstName << endl;

    fin.close();

    return 0;
}
