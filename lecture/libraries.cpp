/*
Name: Jeremy Bergen

Libraries
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
// #include <cstdio>
#include <cassert>
#include <string>
#include <random>
#include <cctype>
#include <iomanip>
// #include <cstdio>

using namespace std;

int main()
{
    cout << boolalpha;
    cout << (1 == 1) << endl;
    cout << noboolalpha;
    cout << (1 != 1) << endl;
    cout << (1 < 1) << endl;
    cout << (1 <= 1) << endl;
    cout << (1 > 1) << endl;
    cout << (1 >= 1) << endl;

    // int nameW, titleW, positionW;

    // nameW = 17;
    // titleW = 25;
    // positionW = 18;

    // cout << left;
    // cout << setw(nameW) << "Name" << setw(titleW) << "Title" << setw(positionW) << "Position" << endl;
    // // cout << "===============================================" << endl;
    
    // cout << setfill('=');
    // cout << setw(nameW + titleW + positionW) << "" << endl;
    // cout << setfill(' ');
    
    // cout << setw(nameW) << "Jeremy" << setw(titleW) << "Master of the Universe" << setw(positionW) << "All Seeing" << endl;
    // cout << setw(nameW) << "Steve" << setw(titleW) << "Court Jester" << setw(positionW) << "Fool" << endl;
    // cout << setw(nameW) << "Doofenschmirtz" << setw(titleW) << "Accountant" << setw(positionW) << "Head Accountant" << endl;
    // cout << right;




    // cout.setf(ios::fixed, ios::floatfield);
    // cout << setprecision(2) << 42.12721321 << endl;
    // // cout << "\tName" << "\tTitle" << "\tPosition" << endl;
    
    
    
    // cout << "Please press enter to quit." << endl;
    // cin.get();
    // cin.ignore(1000, '\n');
    // getchar();
    
    
    // cout << setw(10) << "HelloWorld!!!!" << endl;
    // char someCh = 'a';

    // cout << (char)tolower(someCh) << endl;
    // srand(rand());
    // cout << (rand()%100)+1 << endl;
    // string phrase;

    // phrase = "This is a sentence.";

    // cout << "The length of our phrase is: " << phrase.length() << endl;

    // phrase.append(" And this is another sentence.");

    // cout << "The length of our phrase is: " << phrase.length() << endl;

    // phrase = phrase + " Yet a third sentence.";

    // cout << phrase << endl;
    // float n1, n2;
    // float sum;

    // cout << "Enter number 1: ";
    // cin >> n1;

    // cout << "Enter number 2: ";
    // cin >> n2;

    // sum = n1 + n2;

    // cout << n1 << " + " << n2 << " = " << sum << endl;
    // printf("%.2f + %.2f = %.2f\n", n1, n2, sum);
    // double someNumber;

    // someNumber = atof("42.a23, 2");
    // cout << someNumber << endl;
    // int numSeconds;
    // int origSeconds;
    // int numMinutes;
    // int numHours;

    // cout << "Enter number of seconds: ";
    // cin >> numSeconds;
    // origSeconds = numSeconds;

    // numHours = numSeconds/3600;
    // numMinutes = (numSeconds/60) - (numHours * 60);
    // numSeconds = numSeconds%60;

    // cout << "The hours:minutes:seconds given " << origSeconds << " seconds is: "
    //      << numHours << ":" << numMinutes << ":" << numSeconds << endl;
    // numMinutes = (numMinutes - (numHours * 60)) % 60;

    // cout << 127%60 << endl;
    // float result = ((180/3.14)*cos(42))+360;
    // cout << result << endl;
    // cout << (180/M_SQRT1_2)*cos(42) << endl;
    // int n1, n2;
    // n1 = 2;
    // n2 = 8;
    // cout << (n1^n2) << endl;
    return 0;
}