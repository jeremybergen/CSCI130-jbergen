/*
Name: Jeremy Bergen

All about the namespaces
*/
#include <iostream>
#include <string>

using namespace std;

namespace MyNameSpace {
    string firstName = "Bob";
    string lastName = "Builder";
    namespace MyOtherNameSpace {
        string firstName = "I";
        string lastName = "DK";
    }
}

int main() {
    string firstName = "Jeremy";
    string lastName = "Bergen";
    cout << "Hello " 
         << MyNameSpace::firstName << " "
         << MyNameSpace::MyOtherNameSpace::lastName << endl;
    return 0;
}