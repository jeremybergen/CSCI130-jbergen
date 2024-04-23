/*
Name: Jeremy Bergen

Structures
*/
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

struct Person
{
    string fName;
    string lName;
    string title;
    string favColor;
    int favNumber;
};

struct FieldW
{
    size_t fName = 12;
    size_t lName = 11;
    size_t title = 7;
    size_t fColor = 11;
    size_t fNumber = 12;
};

/// @brief tipType = 0: point
///                  1: wedge
///                  2: chisel
struct Marker
{
    string color;
    bool capOn = true;
    float inkLevel = 100;
    int tipType = 2;
};

string getFileName();
void readData(ifstream &, Person[], int &, FieldW &);
void printData(Person[], int, FieldW &);
void writeData(ofstream &, Person[], int &, FieldW &);
int countLines(ifstream &);

int main(int argc, char *argv[])
{
    FieldW fieldWidths;
    FieldW* heapFieldWidths = new FieldW;
    Person somePerson;

    fieldWidths.fName = 10;
    (*heapFieldWidths).fName = 42;
    heapFieldWidths->fName = 42;
    somePerson.fName = "Jeremy";
    somePerson.favNumber = 42;

    ifstream fin;
    ofstream fout;
    int numPeople = 0;
    string fileName = getFileName();
    fin.open(fileName);
    if (!fin.is_open())
    {
        cout << "Invalid file" << endl;
        return 0;
    }

    fout.open("files/output.txt");
    
    int numLines = countLines(fin);

    Person people[numLines];

    readData(fin, people, numPeople, fieldWidths);

    printData(people, numPeople, fieldWidths);

    writeData(fout, people, numPeople, fieldWidths);

    fout.close();
    fin.close();

    delete heapFieldWidths;
    return 0;
}

int countLines(ifstream &fin)
{
    // cout << "DEBUG: Flags: " << fin.rdstate() << endl;
    int numLines = 0;
    string tmpLine;
    while(getline(fin, tmpLine))
    {
        numLines++;
    }
    fin.clear();
    fin.seekg(0);
    // cout << "DEBUG: numLines: " << numLines << endl;
    // cout << "DEBUG: Flags: " << fin.rdstate() << endl;
    // cout << (fin.rdstate() & ifstream::failbit) << endl;
    return numLines;
}

void writeData(ofstream &fout, Person people[], int &numPeople, FieldW &fieldWidths)
{
    fout << left;
    fout << setw(fieldWidths.fName) << "First Name"
         << setw(fieldWidths.lName) << "Last Name"
         << setw(fieldWidths.fColor) << "Fav Color"
         << setw(fieldWidths.fNumber) << "Fav Number" << endl;
    fout << setfill('-') << setw(fieldWidths.fName + fieldWidths.lName + fieldWidths.fColor + fieldWidths.fNumber) << "" << endl;
    fout << setfill(' ');
    for (int i = 0; i < numPeople; i++)
    {
        fout << setw(fieldWidths.fName) << people[i].fName
             << setw(fieldWidths.lName) << people[i].lName
             << setw(fieldWidths.fColor) << people[i].favColor
             << setw(fieldWidths.fNumber) << people[i].favNumber << endl;
    }
}

void readData(ifstream &fin, Person people[], int &numPeople, FieldW &fieldWidths)
{
    string inputLine;

    while (getline(fin, inputLine))
    {
        // cout << "DEBUG: inputLine: " << inputLine << endl;
        istringstream iss;
        iss.str(inputLine);
        string token;
        int fieldNum = 0;

        while (getline(iss, token, ','))
        {
            if (fieldNum == 0)
            {
                people[numPeople].fName = token;
                if (fieldWidths.fName < token.length() + 2)
                {
                    fieldWidths.fName = token.length() + 2;
                }
            }
            if (fieldNum == 1)
            {
                people[numPeople].lName = token;
                if (fieldWidths.lName < token.length() + 2)
                {
                    fieldWidths.lName = token.length() + 2;
                }
            }
            if (fieldNum == 2)
            {
                people[numPeople].title = token;
                if (fieldWidths.title < token.length() + 2)
                {
                    fieldWidths.title = token.length() + 2;
                }
            }
            if (fieldNum == 3)
            {
                people[numPeople].favColor = token;
                if (fieldWidths.fColor < token.length() + 2)
                {
                    fieldWidths.fColor = token.length() + 2;
                }
            }
            if (fieldNum == 4)
            {
                people[numPeople].favNumber = stoi(token);
                if (fieldWidths.fNumber < token.length() + 2)
                {
                    fieldWidths.fNumber = token.length() + 2;
                }
            }

            fieldNum++;
        }
        numPeople++;
    }
}

string getFileName()
{
    string fileName;
    cout << "What is the file you want to read: ";
    getline(cin, fileName);
    return fileName;
}

void printData(Person people[], int numPeople, FieldW &fieldWidths)
{
    cout << left;
    cout << setw(fieldWidths.fName) << "First Name"
         << setw(fieldWidths.lName) << "Last Name"
         << setw(fieldWidths.fColor) << "Fav Color"
         << setw(fieldWidths.fNumber) << "Fav Number" << endl;
    cout << setfill('-') << setw(fieldWidths.fName + fieldWidths.lName + fieldWidths.fColor + fieldWidths.fNumber) << "" << endl;
    cout << setfill(' ');
    for (int i = 0; i < numPeople; i++)
    {
        cout << setw(fieldWidths.fName) << people[i].fName
             << setw(fieldWidths.lName) << people[i].lName
             << setw(fieldWidths.fColor) << people[i].favColor
             << setw(fieldWidths.fNumber) << people[i].favNumber << endl;
    }
}

// struct MyData2
// {
//     string classes[10];
//     float grades[10];
//     string instructor[10];
// };

// struct Data
// {
//     string fName;
//     string lName;
//     string title;
//     string color;
//     int favNum;
//     int numbers[5];

//     int* somePointer;
//     MyData2* myCourses = new MyData2;

//     void hello()
//     {
//         cout << "Hello World" << endl;
//     }
// };

// void printData(Data*);

// void printData(Data* tmpData)
// {
//     cout << tmpData->fName << "\t" << tmpData->lName << endl;
// }

// int main(int argc, char* argv[])
// {
//     Data student1;

//     student1.fName = "Jeremy";
//     student1.lName = "Bergen";
//     student1.myCourses->classes[0] = "CSCI130";
//     student1.myCourses->instructor[0] = "Jeremy Bergen";
//     student1.myCourses->grades[0] = 2;
//     student1.hello();
//     printData(&student1);

//     Data* student2 = new Data;

//     student2->fName = "Mike";
//     student2->lName = "Kansgen";
//     (*student2->myCourses).classes[0] = "CSCI130";
//     student2->myCourses->instructor[0] = "Jeremy Bergen";
//     student2->hello();
//     printData(student2);

//     delete student2;

//     // Data* dataGroup[5];

//     // for(int i = 0; i < 5; i++)
//     // {
//     //     dataGroup[i] = nullptr;
//     // }

//     // for(int i = 0; i < 5; i++)
//     // {
//     //     dataGroup[i] = new Data;
//     //     cout << "Enter person number: " << i+1 << endl;
//     //     cin >> dataGroup[i]->fName;
//     //     cin >> dataGroup[i]->lName;
//     //     getline(cin, dataGroup[i]->title);
//     // }

//     // for(int i = 0; i < 5; i++)
//     // {
//     //     cout << dataGroup[i]->fName << "\t"
//     //          << dataGroup[i]->lName << "\t"
//     //          << dataGroup[i]->title << endl;
//     // }

//     // Data* dataGroup[5];
//     // Data dataGroup2[5];

//     // Data* myData1 = new Data;
//     // Data* myData2;
//     // Data someData;
//     // Data thirdData;

//     // myData2 = &someData;

//     // dataGroup[0] = myData1;
//     // dataGroup[1] = myData2;
//     // dataGroup[2] = &thirdData;

//     // dataGroup2[0] = *myData1;
//     // dataGroup2[1] = *myData2;
//     // dataGroup2[2] = thirdData;

//     // cout << "sizeof(Data): " << sizeof(Data) << endl;
//     // Data myData1;

//     // myData2->fName = "Mike";

//     // (*myData1).fName = "Jeremy";
//     // myData1->lName = "Bergen";
//     // myData1->title = "Assistant Professor of Computer Science";
//     // myData1->color = "Red";
//     // myData1->favNum = 42;
//     // myData1->numbers[0] = 42;
//     // myData1->numbers[1] = 15;
//     // myData1->numbers[2] = 23;
//     // myData1->numbers[3] = 9000;
//     // myData1->numbers[4] = -1;

//     // myData1->somePointer = &myData1->favNum;

//     // cout << myData1->fName << "\t" << myData1->lName << endl;
//     // delete myData1;
//     // for(int i = 0; i < 5; i++)
//     // {
//     //     delete dataGroup[i];
//     // }
//     return 0;
// }