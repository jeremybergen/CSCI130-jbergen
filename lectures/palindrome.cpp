/*
Name: Jeremy Bergen

Palindromes
*/
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

void getPhrase(string&);
void cleanupPhrase(const string&, string&);
string checkPalindrome(const string&);
void tests();

int main(int argc, char *argv[]) {
    string phrase;

    if(argc == 2 && (string)argv[1] == "test") {
        tests();
        return 0;
    }

    getPhrase(phrase);

    cout << checkPalindrome(phrase) << endl;


    // phrase = "racecar";
    // bool notPalidrome = false;
    // cout << "DEBUG: cleanPhrase: " << cleanPhrase << endl;
    return 0;
}

void tests() {
    assert(checkPalindrome("racecar") == "Your word is a palindrome. Good job");
    assert(checkPalindrome("apple") == "This is not a palindrome, stupid!");
    assert(checkPalindrome("Taco cat") == "Your word is a palindrome. Good job");

    //void cleanupPhrase(const string&, string&);
    string result;
    cleanupPhrase("Taco cat", result);
    assert(result == "tacocat");

    result = "";
    cleanupPhrase("a&4@s4%@1pple", result);
    assert(result == "aspple");

    result = "";
    cleanupPhrase("raCEcar", result);
    assert(result == "racecar");
    cout << "All test cases passed" << endl;
}

string checkPalindrome(const string &phrase) {
    string cleanPhrase;
    cleanupPhrase(phrase, cleanPhrase);

    // cout << "DEBUG: cleanPhrase: " << cleanPhrase << endl;
    for(size_t i = 0; i < cleanPhrase.length(); i++) {
        if (cleanPhrase[i] == cleanPhrase[cleanPhrase.length()-i-1]) {
            continue;
        } else {
            // cout << "DEBUG: cleanPhrase[" << i << "]: " << cleanPhrase[i] << endl;
            // cout << "DEBUG: cleanPhrase[" << cleanPhrase.length()-i-1 << "]: " << cleanPhrase[cleanPhrase.length()-i-1] << endl;
            return "This is not a palindrome, stupid!";
        }
    }
    return "Your word is a palindrome. Good job";
}

void cleanupPhrase(const string &phrase, string &cleanPhrase) {
    for (size_t i = 0; i < phrase.length(); i++) {
        // if (phrase[i] != ' ' && phrase[i] != '.' && phrase[i] != '-') {
            // cout << "DEBUG: toupper: " << toupper(phrase[i]) << endl;
            if (toupper(phrase[i]) >= 65 && toupper(phrase[i]) <= 90) {
                // cout << "DEBUG: inside if" << endl;
                cleanPhrase += tolower(phrase[i]);
        }
    }
}

void getPhrase(string &phrase) {
    cout << "Please enter a phrase to check if it is a palindrome: ";
    getline(cin, phrase);
}