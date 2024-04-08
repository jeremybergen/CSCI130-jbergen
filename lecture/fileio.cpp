/*
Name: Jeremy Bergen

File I/O
*/
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{
    // string fName, lName, title, color;
    string lines[3][4];
    string inputLine;
    ifstream fin;

    fin.open("files/input.csv");

    int rowNumber = 0;
    
    while(getline(fin, inputLine))
    {
        int colNumber = 0;
        // cout << "DEBUG: " << inputLine << endl;
        // Jeremy,Bergen,Assistant Professor of Computer Science,Red
        istringstream iss;
        iss.str(inputLine);
        string token;
        // iss >> token;
        // cout << "DEBUG: token: " << token << endl;

        while(getline(iss, token, ','))
        {
            lines[rowNumber][colNumber] = token;
            colNumber++;
        }



        //string method:
        // for(int i = 0; i < inputLine.length(); i++)
        // {
        //     // cout << "DEBUG: : " << inputLine.find(',') << endl;
        //     size_t commaLoc = inputLine.find(',', i);
        //     if(commaLoc == string::npos)
        //     {
        //         lines[rowNumber][colNumber] = inputLine.substr(i);
        //         break;
        //     }
        //     // cout << "DEBUG: inputLine.substr(" << i << ", " << commaLoc - i << "): " 
        //     //      << inputLine.substr(i, commaLoc - i) << endl;

        //     lines[rowNumber][colNumber] = inputLine.substr(i, commaLoc - i);
        //     // cout << "DEBUG: i: " << i << endl;
        //     // cout << "DEBUG: lines[" << rowNumber << "][" << colNumber << "]: "
        //     //      << lines[rowNumber][colNumber] << endl;
        //     colNumber++;
        //     i = commaLoc;

            
        // }
        rowNumber++;
    }

    for(int i = 0; i < rowNumber; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << lines[i][j] << "\t";
        }
        cout << endl;
    }

    fin.close();
    return 0;
}










    // string numbers[5];
    // ifstream fin;
    // ofstream fout;

    // fin.open("files/input.txt", ios_base::ate);
    // // cout << "tellg: " << fin.tellg() << endl;
    // // char buffer[fin.tellg()];
    // // fin.seekg(0);
    // // return 0;

    // //fin.open("c:\\Users\\jbergen\\projects\\CSCI130-jbergen\\Assignments\\HW1\\files\\input.txt");
    // fout.open("files/output.txt", ios_base::out|ios_base::app);

    // for(int i = 0; i < 5; i++)
    // {
    //     // fin >> numbers[i];
    //     getline(fin, numbers[i]);
    // }
    // // fin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3] >> numbers[4];

    // for(int i = 0; i < 5; i++)
    // {
    //     fout << "numbers[" << i << "]: " 
    //          << numbers[i] << endl;
    // }

    // fout.close();
    // fin.close();
