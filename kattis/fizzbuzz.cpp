/*
Name: Jeremy Bergen

Input
Input contains a single test case. 
Each test case contains three integers on a single line, 
X, Y and N (1 <= X < Y <= N <= 100).

Output
Print integers from 
1 to N
 in order, each on its own line, replacing the ones divisible by 
X with Fizz, the ones divisible by 
Y with Buzz and ones divisible by both 
X and Y
 with FizzBuzz.
*/
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

void readNumbers(int&, int&, int&);
string fizzBuzz(int, int, int);
void test();

int main()
{
    test();
    int xFizz, yBuzz, nNumLoop;
    string answer;
    readNumbers(xFizz, yBuzz, nNumLoop);

    answer = fizzBuzz(xFizz, yBuzz, nNumLoop);

    cout << answer;

    return 0;
}



string fizzBuzz(int xFizz, int yBuzz, int nNumLoop)
{
    string result = "";
    for(int i = 1; i <= nNumLoop; i++)
    {
        if(i%xFizz == 0)
        {
            result += "Fizz";
        }
        if(i%yBuzz == 0)
        {
            result += "Buzz";
        }
        // https://stackoverflow.com/questions/5590381/how-to-convert-int-to-string-in-c
        if(i%xFizz != 0 && i%yBuzz != 0)
        {
            result += to_string(i);
        }
        // cout << result;
        result += "\n";
        // else if(i%xFizz == 0 && i%yBuzz == 0)
        // {
        //     cout << "FizzBuzz";
        // }
    }
    // result == "1\nFizz\n3\nFizzBuzz\n5\nFizz\n7\n"
    return result;
}

void readNumbers(int& xFizz, int& yBuzz, int& nNumLoop)
{
    //       2        3         7
    cin >> xFizz >> yBuzz >> nNumLoop;
}



void test()
{
    assert(fizzBuzz(2, 4, 7) == "1\nFizz\n3\nFizzBuzz\n5\nFizz\n7\n");
    assert(fizzBuzz(2, 3, 4) == "1\nFizz\nBuzz\nFizz\n");
}