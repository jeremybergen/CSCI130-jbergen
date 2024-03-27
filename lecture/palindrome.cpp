/*
Palindrome checker

1) Greet User
2) Prompt for a string
3) Check if Palimdrome. A string which is the same forwards and backwards
    a) create loop
        z) if only zero or one letter, return true
    b) each iteration of loop, check if first character is not the same as last. 
       Case insensitive, ignore anything which is not A-Z
    c) move in one character
    d) if all same, return true, else return false
4) print out result
*/
#include <string>
#include <iostream>

using namespace std;

string getName();
void greetName(string);
void getString(string&);
bool checkPalin(string);
string sanitizeString(string);

int main(int argc, char* argv[])
{
    // string cleanStr;
    string inputStr;
    string name;
    bool isPalindrome;
    name = getName();
    greetName(name);

    getString(inputStr);

    // cleanStr = sanitizeString(inputStr);

    isPalindrome = checkPalin(inputStr);

    // cout << boolalpha << isPalindrome << endl;
    (isPalindrome) ? cout << "The string is a palindrome." << endl : cout << "The string is NOT a palindrome" << endl;
    // if(isPalindrome)
    // {
    //     cout << "The string is a palindrome." << endl;
    // }
    // else
    // {
    //     cout << "The string is NOT a palindrome." << endl;
    // }
    
    return 0;
}

string sanitizeString(string inputString)
{
    string cleanString;
    // for(auto it = inputString.begin(); it != inputString.end(); it++)
    for(char ch : inputString)
    {
        // if(ch != ' ' && ch != ',' && ch != '.' && ch != '!')
        if((ch >= 'A' && ch <= 'Z') || (ch >= 97 && ch <= 'z'))
        {
            // cleanString.append(to_string((char)tolower(ch)));
            cleanString += (char)tolower(ch);
        }
    }
    cout << "DEBUG: inputString: " << inputString << " cleanString: " << cleanString << endl;
    return cleanString;
}

bool checkPalin(string inputString)
{
    // a) create loop
    //   z) if only zero or one letter, return true
    // b) each iteration of loop, check if first character is not the same as last. 
    //     Case insensitive, ignore anything which is not A-Z
    // c) move in one character
    // d) if all same, return true, else return false
    string cleanStr = sanitizeString(inputString);
    for(size_t i = 0; i < cleanStr.length(); i++)
    {
        if(tolower(cleanStr.at(i)) != tolower(*(cleanStr.rbegin() + i)))
        // if(tolower(inputString.at(i)) != tolower(inputString.at(inputString.length() - 1 - i)))
        {
            cout << "DEBUG: these characters do not match: "
                 << cleanStr.at(i) << " " << *(cleanStr.rbegin() + i) << endl;
            return false;
        }
    }
    return true;
}

void getString(string& inputString)
{
    cout << "Enter a string to check if it is a palindrome: ";
    // cin >> inputString;
    getline(cin, inputString);
}

string getName()
{
    string name;
    cout << "Please enter your name: ";
    getline(cin, name);
    return name;
}

void greetName(string name)
{
    cout << "Welcome " << name << " to our palindrome checker." << endl;
}