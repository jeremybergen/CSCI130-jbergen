/*
Name: Jeremy Bergen

File I/O
*/
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    string numbers[5];
    ifstream fin;
    ofstream fout;

    fin.open("/home/jbergen/projects/CSCI130-jbergen/Assignments/HW1/files/input.txt");
    //fin.open("c:\\Users\\jbergen\\projects\\CSCI130-jbergen\\Assignments\\HW1\\files\\input.txt");
    fout.open("files/output.txt", ios_base::out|ios_base::app);

    for(int i = 0; i < 5; i++)
    {
        // fin >> numbers[i];
        getline(fin, numbers[i]);
    }
    // fin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3] >> numbers[4];

    for(int i = 0; i < 5; i++)
    {
        fout << "numbers[" << i << "]: " 
             << numbers[i] << endl;
    }

    fout.close();
    fin.close();
    return 0;
}