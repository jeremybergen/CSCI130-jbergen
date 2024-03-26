/*
Palindrome checker

1) Greet User
2) Prompt for a string
3) Check if Palimdrome. A string which is the same forwards and backwards
    a) create loop
        z) if only zero or one letter, return true
    b) each iteration of loop, check if first character is same as last. 
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

int main(int argc, char* argv[])
{
    string name;
    name = getName();
    greetName(name);

    
    return 0;
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