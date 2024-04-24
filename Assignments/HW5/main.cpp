/*
Name: Jeremy Bergen

Guess the number

step1: Write algorithm steps at the top of the program as comments. (10 points)
step2: Your program will ask the player's name and greet the player. (5 points)
step3: Define a function called randomNumber that generates and returns a random number between 1 and 20. (5 points)
step4: Define a function called readNumber that prompts the user to take a guess and return the guessed number. (10 points)
    You must validate the guessed number to be between 1 and 20.
step5: Define a function called checkGuess that takes two integers compares the two numbers and returns the following result: (10 points)
    returns 0 if the numbers are equal
    returns -1 if the first number is less than second
    returns 2 otherwise
step6: Write 3 test cases for checkGuess function using assert statement. (10 points)
step7: Define a function called game that implements the logic of the guess the number game. (25 points)
    Call the randomNumber function defined above to generate a random number for the user to guess for each game.
    Until the game is over, your program will ask the player to guess the number using the readNumber function defined above.
    Use the function defined above called checkGuess to compare the user entered number with the hidden random number.
    If the player guesses the number within six tries, the game is over and the player wins.
    If the player can't guess the number within six tries, the game is over and the player loses.
    For every wrong guess, your program informs the player whether the guess is too high or too low by calling checkGuess function.

    When the game is over, your program will inform whether the player won or lost the game and reveal the secret random number picked by the computer, especially if they lose. (5 points)

*/
#include <iostream>
#include <cassert>
#include <random>

using namespace std;

string getName();
void greetName(string);
void game();
int randomNumber();
int readNumber();
int checkGuess(int, int);
void test();

int main(int argc, char *argv[])
{
    if(argc >= 2 && (string)argv[1] == "test")
    {
        test();
        return 0;
    }
    srand(time(0));
    string playerName;
    char playAgain = 'n';
    int numGames = 0;
    int wonGames = 0;

    playerName = getName();
    greetName(playerName);

    do
    {
        game();
        numGames++;
        cout << "Do you want to play again [y/n]? ";
        cin >> playAgain;
    } while (tolower(playAgain) == 'y');
    

    return 0;
}

string getName()
{
    string name;
    cout << "What is your name? ";
    getline(cin, name);
    return name;
}
void greetName(string name)
{
    cout << "Welcome " << name << " to our guess the number game." << endl;
}
void game()
{
    /*
    Call the randomNumber function defined above to generate a random number for the user to guess for each game.
    Until the game is over, your program will ask the player to guess the number using the readNumber function defined above.
    Use the function defined above called checkGuess to compare the user entered number with the hidden random number.
    If the player guesses the number within six tries, the game is over and the player wins.
    If the player can't guess the number within six tries, the game is over and the player loses.
    For every wrong guess, your program informs the player whether the guess is too high or too low by calling checkGuess function.

    When the game is over, your program will inform whether the player won or lost the game and reveal the secret random number picked by the computer, especially if they lose. (5 points)
    */
    int maxGuesses = 6;
    int rNum = randomNumber();
    while(maxGuesses > 0)
    {
        int pNum = readNumber();
        int check = checkGuess(rNum, pNum);

        if(check == 0)
        {
            cout << "Congrats, you guessed my number" << endl;
            break;
        }

        if(check == -1)
        {
            cout << "Your number too high" << endl;
        } else if (check == 2)
        {
            cout << "Your number is too low" << endl;
        }

        maxGuesses--;
    }

    if(maxGuesses == 0)
    {
        cout << "You did not guess my number, it was: " << rNum << endl;
    } else
    {
        cout << "You did guess my number, yay" << endl;
    }
}
int randomNumber()
{
    return rand() % 20 + 1;
}

/// @brief This function will prompt players for a number and validate that the number
///        is between 1 and 20. Continually reprompting until it is between 1 and 20
/// @return The player's guess as an int.
int readNumber()
{
    int pNum;
    do
    {
        cout << "Enter a number between 1 and 20: ";
        cin >> pNum;
        if (pNum < 1 || pNum > 20)
        {
            cout << "Your number must be between 1 and 20" << endl;
        }
    } while (pNum < 1 || pNum > 20);

    return pNum;
}

/// @brief This function takes in two ints and compares them
/// @param rNum Random Number
/// @param pNum Player Guess
/// @return Returns 0 if rNum and pNum are equal, -1 if rNum is greater than pNum, 1 if rNum is less than pNum
int checkGuess(int rNum, int pNum)
{
    // returns 0 if the numbers are equal
    // returns -1 if the first number is less than second
    // returns 2 otherwise
    if (rNum == pNum)
    {
        return 0;
    }
    if (rNum < pNum)
    {
        return -1;
    }
    return 2;
}
void test()
{
    assert(checkGuess(1, 2) == -1);
    assert(checkGuess(4, 3) == 2);
    assert(checkGuess(5, 5) == 0);
    cout << "All test cases passed" << endl;
}