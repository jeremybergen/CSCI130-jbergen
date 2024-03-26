/*
Name: Jeremy Bergen

Strings
*/
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    string fName = "Jeremy";

    fName = fName + " Bergen";
    // fName += " Bergen";
    // fName.append(" Bergen");
    // fName.append(" The Almighty Tallest");
    // cout << "fName: " << fName << endl;

    cout << fName << endl;
    int insertPos = 7;
    fName.insert(insertPos, "The Greatest ");
    cout << fName << endl;

    for(size_t i = 0; i < fName.length(); i++)
    {

        size_t spaceIdx = fName.find(' ', i);
        
        // if(i == 0)
        // {
        //     spaceIdx2 = 0;
        // }

        cout << "substring: " << fName.substr(i, spaceIdx - i) << endl;
        i += (spaceIdx - i);
        if(spaceIdx == string::npos)
        {
            break;
        }
        // cout << "DEBUG: spaceIdx: " << spaceIdx << endl;
        // cout << "DEBUG: i: " << i << endl;
        // if(i != )
        // {
        //     break;
        // }
    }
    // cout << fName.find(' ') << endl;
    // int spaceIdx = fName.find(' ');
    // int spaceIdx2;
    // cout << fName.substr(0, spaceIdx) << endl;

    // spaceIdx2 = fName.find(' ', spaceIdx + 1);
    // // cout << "DEBUG: spaceIdx2: " << spaceIdx2 << endl;
    // cout << fName.substr(spaceIdx + 1, spaceIdx2 - spaceIdx) << endl;


    // string firstName = fName.substr(0, 6);
    // string title = fName.substr(7, 13);
    // string lName = fName.substr(20);
    // cout << "firstName: " << firstName << endl;
    // cout << "title: " << title << endl;
    // cout << "lName: " << lName << endl;
    // cout << fName.front() << endl;

    // for(size_t i = 0; i < fName.length(); i++)
    // {
    //     // cout << "fName[" << i << "]: " 
    //     //      << fName[i] << endl;

    //     cout << "fName.at(" << i << "): " 
    //          << fName.at(i) << endl;

    //     // cout << "*(fName + " << i << "): " 
    //     //      << *(&fName[0] + i) << endl;
    // }

    // int counter = 0;
    // for(auto it = fName.end()-1; it != fName.begin()-1; it--, counter++)
    // {
    //     cout << "*it: " << *it << endl;
    // }

    // for(std::string::reverse_iterator it = fName.rbegin(); it != fName.rend(); it++)
    // {
    //     cout << "*it: " << *it << endl;
    // }

    // for(size_t i = fName.length()-1; i >= 0; i--)
    // {
    //     cout << "fName.at(" << i << "): "
    //          << fName.at(i) << endl;
    // }
    // cout << "fName.at(" << 0 << "): "
    //          << fName.at(0) << endl;


    // string* fName = new string("Jeremy");

    // cout << "The max size of a string is: " << fName.capacity() << endl;
    // fName = "Jeremy Bergen The Almighty Tallest";
    // cout << "The max size of a string is: " << fName.capacity() << endl;
    // fName = "";
    // cout << "The max size of a string is: " << fName.capacity() << endl;
    // string lName = "Bergen";

    // cout << fName + " " + lName << endl;
    // string myString = "Jeremy Bergen";

    // cout << "myString[0]: " << myString[0] << endl;
    // cout << myString.length() << endl;
    // cout << myString.size() << endl;
    // for(size_t i = 0; i < myString.length(); i++)
    // {
    //     cout << "myString[" << i << "]: " 
    //          << myString[i] << endl;
    // }

    return 0;
}