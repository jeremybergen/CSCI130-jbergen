/*
Name: Jeremy Bergen

Loops again, and again, and again, and again, and....
*/
#include <iostream>

using namespace std;

int main()
{
    int someNumber;

    do
    {
        cout << "Enter a number between 1 and 20: ";
        cin >> someNumber;
    } while (someNumber < 1 || someNumber > 20);
    
    // int counter = 0;
    // do
    // {
    //     cout << counter << ": Hello world" << endl;
    //     counter++;
    // } while (counter < 10);
    
    // counter = 0;
    // while(counter < 10)
    // {
    //     cout << counter << ": Hello world" << endl;
    //     counter++;
    // }
    
    
    // char quitCh;
    // cout << "Do you want to quit [y/n]? ";
    // cin >> quitCh;

    // while(quitCh != 'Y' && quitCh != 'y')
    // while(!(quitCh == 'Y' && quitCh == 'y'))
    // while(tolower(quitCh) != 'y')
    // {
    //     // if(quitCh == 'J') 
    //     // {
    //     //     break;
    //     // }

    //     cout << "Now do you want to quit [y/n]? ";
    //     cin >> quitCh;
    // }

    // int counter = 0;
    // float inputNumber;
    // cout << "Enter a number between 1 and 20: ";
    // cin >> inputNumber;

    // while(!(inputNumber >= 1 && inputNumber <= 20))
    // {
    //     cout << "It MUST be between 1 and 20: ";
    //     cin >> inputNumber;
    //     counter++;
    //     if(counter%5 == 0)
    //     {
    //         cout << "You really can't follow the rules...." << endl;
    //     }
    // }

    // cout << "It took you " << counter << " times to follow the rules." << endl;
    // int counter = 0;
    // while(counter < 10)
    // {
    //     cout << counter << ": Hello world" << endl;
    //     counter++;
    // }
    // for(int i = 0; i < 10; i++)
    // {
    //     cout << i << ": Hello world" << endl;
    // }

    // int someNumber;
    // int tableSize;
    // cout << "How big of a multiplication table do you want? ";
    // cin >> tableSize;

    // for(int i = 1; i < tableSize + 1; i++)
    // {
    //     for(int j = 1; j <= tableSize; j++)
    //     {
    //         if(j >= 5)
    //         {
    //             break;
    //         }
    //         cout << j * i << "\t";
            
    //     }
    //     cout << endl;
    //     // if (i%2 == 1)
    //     // {
    //     //     break;
    //     // }
    //     // cout << i << ": Hello World" << endl;
    //     // // someNumber = 42;
    //     // // cout << "Press enter to get the next one";
    //     // // cin.get();
    // }

    cout << "after for loop" << endl;

    // cout << someNumber;
    // cout << "Hello World" << endl;
    // cout << "Hello World" << endl;
    // cout << "Hello Whirld" << endl;
    // cout << "Hello Whirld" << endl;
    // cout << "Hello Whirld" << endl;
    // cout << "Hello Whirld" << endl;
    // cout << "Hello Whirld" << endl;
    // cout << "Hello Whirld" << endl;
    // cout << "Hello Whirld" << endl;
    // cout << "Hello Whirld" << endl;
    return 0;
}