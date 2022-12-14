/*
Name: Jeremy Bergen

File I/O
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readFile(char *, ifstream&, int);
void writeFile(char *, ofstream&, int);

int main(int argc, char *argv[]) {
    ifstream fin;
    ofstream fout;
    fstream fileStream;
    string fileInPath;
    string fileOutPath;
    // string myString, myString2;
    // int myNumbers;

    // fileStream.open("../labs/files/basic_fstream.txt", ios_base::in|ios_base::out);
    
    // cout << fileStream.tellg() << endl;
    // fileStream.seekg(0, ios_base::end);
    // cout << fileStream.tellg() << endl;
    // fileStream.seekg(0);
    // fileStream.seekg(19);
    // fileStream.put('c');
    // fileStream.put('c');
    // fileStream.put('c');
    // fileStream.put('c');
    // fileStream.put('c');
    // fileStream.put('c');
    // char character = fileStream.get();
    // cout << character << endl;

    cout << "Please enter the path to the file you want to copy: " << endl;
    getline(cin, fileInPath);
    fin.open(fileInPath, ios_base::ate|ios_base::binary);
    // fin.open("files\\input.txt");
    // fin.open("c:\\Users\\jbergen\\CSCI130-jbergen\\lectures\\files\\input.txt");
    // fin.open("/root/CSCI130-jbergen/lectures/files/input.txt");
    cout << "Please enter the path to the output file: " << endl;
    getline(cin, fileOutPath);
    fout.open(fileOutPath, ios_base::binary);
    // fout.open("../labs/files/output.txt", 1);
    // fin.open("/root/CSCI130-jbergen/lectures/files/output.txt");

    if (fin.is_open()) {
        size_t bufSize = fin.tellg();

        char *buffer = new char[bufSize];

        readFile(buffer, fin, bufSize);

        // for(size_t i = 0; i < bufSize; i++) {
        //     buffer[i] = fin.get();
        // }

        if (fout.is_open()) {
            writeFile(buffer, fout, bufSize);
        }
        
        // for(size_t i = 0; i < bufSize; i++) {
        //     fout << buffer[i];
        // }

        // while(fin >> myNumbers) {
        //     fout << myNumbers << endl;
        // }

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

        // fileStream.close();
        delete[] buffer;
        fin.close();
        fout.close();
    }

    return 0;
}

void readFile(char *buffer, ifstream &fin, int bufSize) {
    // cout << fin.tellg() << endl;
    fin.seekg(0);
    fin.read(buffer, bufSize);

}

void writeFile(char *buffer, ofstream &fout, int bufSize) {
    fout.write(buffer, bufSize);
}