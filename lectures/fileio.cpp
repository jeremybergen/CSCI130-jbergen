/*
Name: Jeremy Bergen

File I/O
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    ifstream fin;
    ofstream fout;
    // string myString, myString2;
    int myNumbers;

    fin.open("../labs/files/input.txt");
    // fin.open("files\\input.txt");
    // fin.open("c:\\Users\\jbergen\\CSCI130-jbergen\\lectures\\files\\input.txt");
    // fin.open("/root/CSCI130-jbergen/lectures/files/input.txt");
    fout.open("../labs/files/output.txt");
    // fin.open("/root/CSCI130-jbergen/lectures/files/output.txt");

    while(fin >> myNumbers) {
        fout << myNumbers << endl;
    }

    // fin >> myString >> myString2;
    // getline(fin, myString);
    // cout << myString << endl;
    // getline(fin, myString);
    // cout << myString << endl;
    // getline(fin, myString);
    // cout << myString << endl;

    // while(!fin.eof()) {
    // while(getline(fin, myString)) {
    // while(fin >> myString) {
    //     cout << myString << endl;
    // }

    fin.close();
    fout.close();

    return 0;
}