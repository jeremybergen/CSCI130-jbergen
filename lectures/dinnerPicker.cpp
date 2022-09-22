/*
Name: Jeremy Bergen

Dinner picker
*/
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

void greetPerson();
void promptName(string&);
unsigned int travelDistance();
float pocketChange();
string whereToGo(unsigned int, float);
void tests();

int main(int argc, char *argv[]) {
    unsigned int distance;
    float money;

    tests();

    greetPerson();

    distance = travelDistance();
    money = pocketChange();

    cout << whereToGo(distance, money);

    // cout << "DEBUG: distance= " << distance << endl;
    // cout << "DEBUG: pocketChange= " << money << endl;

    return 0;
}

void tests() {
    assert(whereToGo(5, 19) == "Chili's, I want some baby back ribs\n");
    assert(whereToGo(5, 93) == "Taco Johns, A whole lot of heartburn...\n");
    assert(whereToGo(5, 10.2) == "Chili's, I want some baby back ribs\n");
    cout << "All test cases passed" << endl;
}

string whereToGo(unsigned int distance, float money) {
    if (money <= 2) {
        return "Go dumpster diving...\n";
    } else if (money <= 10) {
        return "Arby's, They have the meats...\n";
    } else if (money <= 20) {
        return "Chili's, I want some baby back ribs\n";
    } else if (money <= 30) {
        return "Outback, put some shrimp on the barbie\n";
    } else if (money <= 100) {
        return "Taco Johns, A whole lot of heartburn...\n";
    } else {
        return "Devil's Kitchen, get one appetizer\n";
    }
}

float pocketChange() {
    float money;

    cout << "How much money do you have in your pocket? ";
    cin >> money;

    if (money < 0) {
        cout << "You must have positive money..." << endl;
        money = pocketChange();
    }

    return money;
}

unsigned int travelDistance() {
    unsigned int distance;

    cout << "How far do you want to travel? ";
    cin >> distance;

    return distance;
}

void greetPerson() {
    string firstName;

    promptName(firstName);

    cout << "Welcome to my dinner picker, "
         << firstName << endl;
}

void promptName(string &name) {
    cout << "Please enter your first name: ";
    getline(cin, name);
}
