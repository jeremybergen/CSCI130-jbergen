/*
Name: Jeremy Bergen

Structures
*/
#include <iostream>
#include <string>

using namespace std;

struct MyData2
{
    string classes[10];
    float grades[10];
    string instructor[10];
};

struct Data
{
    string fName;
    string lName;
    string title;
    string color;
    int favNum;
    int numbers[5];

    int* somePointer;
    MyData2* myCourses = new MyData2;

    void hello()
    {
        cout << "Hello World" << endl;
    }
};

void printData(Data*);

void printData(Data* tmpData)
{
    cout << tmpData->fName << "\t" << tmpData->lName << endl;
}

int main(int argc, char* argv[])
{
    Data student1;

    student1.fName = "Jeremy";
    student1.lName = "Bergen";
    student1.myCourses->classes[0] = "CSCI130";
    student1.myCourses->instructor[0] = "Jeremy Bergen";
    student1.myCourses->grades[0] = 2;
    student1.hello();
    printData(&student1);

    Data* student2 = new Data;

    student2->fName = "Mike";
    student2->lName = "Kansgen";
    (*student2->myCourses).classes[0] = "CSCI130";
    student2->myCourses->instructor[0] = "Jeremy Bergen";
    student2->hello();
    printData(student2);

    delete student2;

    // Data* dataGroup[5];

    // for(int i = 0; i < 5; i++)
    // {
    //     dataGroup[i] = nullptr;
    // }

    // for(int i = 0; i < 5; i++)
    // {
    //     dataGroup[i] = new Data;
    //     cout << "Enter person number: " << i+1 << endl;
    //     cin >> dataGroup[i]->fName;
    //     cin >> dataGroup[i]->lName;
    //     getline(cin, dataGroup[i]->title);
    // }

    // for(int i = 0; i < 5; i++)
    // {
    //     cout << dataGroup[i]->fName << "\t" 
    //          << dataGroup[i]->lName << "\t" 
    //          << dataGroup[i]->title << endl;
    // }

    // Data* dataGroup[5];
    // Data dataGroup2[5];

    // Data* myData1 = new Data;
    // Data* myData2;
    // Data someData;
    // Data thirdData;

    // myData2 = &someData;

    // dataGroup[0] = myData1;
    // dataGroup[1] = myData2;
    // dataGroup[2] = &thirdData;

    // dataGroup2[0] = *myData1;
    // dataGroup2[1] = *myData2;
    // dataGroup2[2] = thirdData;

    // cout << "sizeof(Data): " << sizeof(Data) << endl;
    // Data myData1;

    // myData2->fName = "Mike";

    // (*myData1).fName = "Jeremy";
    // myData1->lName = "Bergen";
    // myData1->title = "Assistant Professor of Computer Science";
    // myData1->color = "Red";
    // myData1->favNum = 42;
    // myData1->numbers[0] = 42;
    // myData1->numbers[1] = 15;
    // myData1->numbers[2] = 23;
    // myData1->numbers[3] = 9000;
    // myData1->numbers[4] = -1;

    // myData1->somePointer = &myData1->favNum;

    // cout << myData1->fName << "\t" << myData1->lName << endl;
    // delete myData1;
    // for(int i = 0; i < 5; i++)
    // {
    //     delete dataGroup[i];
    // }
    return 0;
}