/*
Name: Jeremy Bergen

File Structs
*/
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

struct Person {
    string firstName;
    string lastName;
    string department;
    int officeNumber;
};

void readData(ifstream&, Person *[], int&, size_t[]);

int main(int argc, char *argv[]) {
    ifstream fin;
    string inputString;
    Person *people[100];
    int counter = 0;

    // size_t firstNameWidth = 0;
    // size_t lastNameWidth = 0;
    // size_t departmentWidth = 0;
    // size_t officeNumberWidth = 0;
    size_t colWidth[4] = {0};
    colWidth[3] = 5;

    fin.open("files/input.txt");
    
    
    readData(fin, people, counter, colWidth);


    for(int i = 0; i < counter; i++) {
        cout << left << setw(colWidth[0]) << people[i]->firstName 
                     << setw(colWidth[1]) << people[i]->lastName 
                     << setw(colWidth[2]) << people[i]->department 
                     << setw(colWidth[3]) << people[i]->officeNumber << endl;
    }
    // cout << newPerson.firstName << endl;

    fin.close();

    for(int i = 0; i < counter; i++) {
        delete people[i];
    }

    return 0;
}

void readData(ifstream &fin, Person *people[], int &counter, size_t colWidth[]) {
    string inputString;
    while(getline(fin, inputString)) {
        // Person *newPerson = new Person();
        // "Jeremy Bergen CS 336"
        // string tmpString;
        people[counter] = new Person();
        stringstream iss(inputString);

        iss >> people[counter]->firstName >> people[counter]->lastName >> people[counter]->department >> people[counter]->officeNumber;

        // cout << "DEBUG: people[counter]->firstName.length(): " << people[counter]->firstName.length() << endl;
        // cout << "DEBUG: firstNameWidth: " << firstNameWidth << endl;
        // cout << "DEBUG2: people[counter]->firstName.length() > firstNameWidth - 2: " << boolalpha << (people[counter]->firstName.length() > firstNameWidth - 2) << endl;
        if(people[counter]->firstName.length() + 2 >= colWidth[0]) {
            colWidth[0] = people[counter]->firstName.length() + 2;
        }
        if(people[counter]->lastName.length() + 2 >= colWidth[1]) {
            colWidth[1] = people[counter]->lastName.length() + 2;
        }
        if(people[counter]->department.length() + 2 >= colWidth[2]) {
            colWidth[2] = people[counter]->department.length() + 2;
        }
        // cout << "DEBUG: firstName: " << newPerson.firstName << endl;
        // cout << "DEBUG: lastName: " << newPerson.lastName << endl;
        // cout << "DEBUG: department: " << newPerson.department << endl;
        // cout << "DEBUG: officeNumber: " << newPerson.officeNumber << endl << endl;
        // people[counter] = newPerson;
        counter++;
        // cout << tmpString << endl;
        // cout << inputString << endl;
    }
}