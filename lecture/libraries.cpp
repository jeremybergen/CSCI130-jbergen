/*
Name: Jeremy Bergen

Libraries
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cassert>
#include <string>
#include <random>

using namespace std;

int main()
{
    srand(rand());
    cout << (rand()%100)+1 << endl;
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