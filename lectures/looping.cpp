/*
Name: Jeremy

all about the loops
*/
#include <iostream>
#include <string>
#include <cassert>
#include <cmath>
#include <iomanip>

using namespace std;

void printHeader(int, int);
void printTable(int, int);
int promptTableSize();

int main(int argc, char *argv[]) {
    int tableSize = 12;
    int padding = 5;

    tableSize = promptTableSize();

    printHeader(padding, tableSize);

    printTable(padding, tableSize);

    return 0;
}

int promptTableSize() {
    int tableSize;
    cout << "What size of table should we print? ";
    cin >> tableSize;

    return tableSize;
}

void printHeader(int padding, int tableSize) {
    cout << setw(padding+1) << "";
    for (int i = 1; i <= tableSize; i++) {
        cout << setw(padding) << i;
    }

    cout << endl;
    cout << setw(tableSize*padding+6) 
         << setfill('-') << "" << endl;

    cout << setfill(' ');

}

void printTable(int padding, int tableSize) {
    for (int i = 1; i <= tableSize; i++) {
        cout << setw(padding) << i << "|";
        for (int j = 1; j <= tableSize; j++) {
            cout << setw(padding) << i * j;
        }
        cout << endl;
    }
}









    // cout << setw(padding+1) << "";
    // while(row <= tableSize) {
    //     cout << setw(padding) << row;
    //     row++;
    // }
    // cout << endl;
    // cout << setw(tableSize*padding+6) << setfill('-') << "" << endl;
    // cout << setfill(' ');

    // row = 1;

    // while(row <= tableSize) {
    //     int column = 1;
    //     cout << setw(padding) << row << "|";
    //     while (column <= tableSize) {
    //         cout << setw(padding) << row * column;
    //         column++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int x = 1;
    // int fieldWidth = 15;

    // cout << right << setw(fieldWidth) << "x" 
    //      << setw(fieldWidth) << "log(x)" 
    //      << setw(fieldWidth) << "log2(x)" 
    //      << setw(fieldWidth) << "log10(x)" << endl;
    // cout << setw(fieldWidth*4) << setfill('-') << "" << endl;
    // cout << setfill(' ');

    // cout << fixed << setprecision(4);

    // while(x <= 10) {
    //     cout << right << setw(fieldWidth) << x 
    //          << setw(fieldWidth) << log(x) 
    //          << setw(fieldWidth) << log2(x) 
    //          << setw(fieldWidth) << log10(x) << endl;
    //     x++;
    // }

    // for(int x=1; x <= 10; x++) {
    //     cout << right << setw(fieldWidth) << x 
    //          << setw(fieldWidth) << log(x) 
    //          << setw(fieldWidth) << log2(x) 
    //          << setw(fieldWidth) << log10(x) << endl;
    // }

    // cout << "x\tlog(x)\tlog2(x)\tlog10(x)\n";

    // int counter=0;
    // int j = 10;

    // do {
    //     cout << "while: Hello" << endl;
    //     counter++;
    // } while(counter > 10);

    // while(counter < 10 && j > 0) {
    //     counter++;
    //     j--;
    //     // if (counter%2 == 0) {
    //     //     continue;
    //     // }        
        
    //     cout << counter << " + " << j 
    //          << " = " << counter + j << endl;

    //     // cout << counter << ": Hello" << endl;

    // }

    // counter = 0;
    // for ( ; ; ) {
    //     cout << "for: Hello" << endl;
    //     counter++;
    //     if (counter >= 10) {
    //         break;
    //     }
    // }

    // for (int i : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}) {
    //     cout << i << "-Hello" << endl;
    // }
    // for(int i=0; i<10; i++) {
    //     cout << i << "-Hello" << endl;
    // }


    // for (float i=0; i<1; i+=.1) {
    //     cout << i << endl;
    // }
    // string firstName = "JEREMY";

    // for (int i=0; i<6; i++) {
    //     cout << firstName[i] << endl;
    // }

    // cout << (int)'J' << endl;

    // for (char ch : firstName) {
    //     cout << (int)ch << endl;
    //     cout << tolower(ch) << endl;
    // }


    // for (int i : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}) {
    //     cout << i << endl;
    // }

    
    // for (int i=1, j=10; i<=10 && j>=1; i++, j--) {
    //     cout << i << " + " << j << " = " << i+j << endl;
    // }

    // for ( ; ; ) {
    //     int counter;
    //     if (counter > 10) {
    //         break;
    //     }
    //     cout << counter << endl;

    //     counter++;
    // }

    // cout << "counter is: " << counter << endl;

    // for(int i=0; i<=10; i++) {
    //     cout << i << endl;
    //     i++;
    // }

    // for(int i=0; i<=10; i++) {
    //     if (i%2 == 0) {
    //         cout << i << endl;
    //     }
    // }

    // for(int i=0; i<=10; i+=2) {
    //     cout << i << endl;
    // }

    // for(int i=0; i<=10; i++) {
    //     if (i%2 == 1) {
    //         continue;
    //     }
    //     cout << i << endl;
    // }
    // int side1;

    // for( ; ; ) {
    //     cout << "Please enter a positive side: ";
    //     cin >> side1;

    //     if (side1 > 0) {
    //         break;
    //     }
    //     cout << "Your side must be greater than zero" << endl;
    // }

    // cout << "You entered: " << side1 << endl;

    // for (int i=0; i >= 0; i++) {
    //     cout << i << endl;
    // }

    // for (int i=0; i<=10; i++) {
    //     // cout << i << "-Hello" << endl;
    //     for (int j=10; j>=0; j--) {
    //         cout << i*j << " ";
    //     }
    //     cout << endl;
    // }
    // cout << i << endl;

    // cout << "1-Hello" << endl;
    // cout << "2-Hello" << endl;
    // cout << "3-Hello" << endl;
    // cout << "4-Hello" << endl;
    // cout << "5-Hello" << endl;

    // int x = 42;

    // // x -= 1
    // // x = x - 1
    // cout << --x << endl;
    // cout << x << endl;
