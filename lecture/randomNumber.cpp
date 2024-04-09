/*
Name: Jeremy Bergen
*/
#include <iostream>
#include <random>

using namespace std;

int randomNumber();

int main(int argc, char* argv[])
{
    srand(1234567);
    cout << randomNumber() << endl;
    cout << randomNumber() << endl;
    cout << randomNumber() << endl;
    cout << randomNumber() << endl;
    cout << randomNumber() << endl;
    cout << randomNumber() << endl;
    cout << randomNumber() << endl;
    cout << randomNumber() << endl;
    cout << randomNumber() << endl;
    cout << randomNumber() << endl;
    return 0;
}

int randomNumber()
{
    return rand()%20+1;
}