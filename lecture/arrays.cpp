/*
Name: Jeremy Bergen

Arrays!!!
*/
#include <iostream>

using namespace std;

bool isWinner(char[][3], size_t);
void printBoard(char[][3], size_t);

int main(int argc, char* argv[])
{
    // size_t arrSize = 0;
    // size_t innerArray = 0;
    // cout << "What is the array size: ";
    // cin >> arrSize;

    // cout << "What is the inner array size: ";
    // cin >> innerArray;
    // int board[arrSize][innerArray];

    char board[3][3];



    for(size_t i = 0; i < 3; i++)
    {
        for(size_t j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }

    // board[0][1] = 42;
    // board[0][0] = 'X';
    // board[1][1] = 'O';
    // board[2][2] = 'X';
    // board[0][2] = 'O';
    // board[2][0] = 'X';
    // board[2][0] = 'O';
    cout << "stage 0: " << endl;
    board[0][0] = 'O';
    printBoard(board, 3);

    cout << "stage 1: " << endl;
    board[0][1] = 'O';
    printBoard(board, 3);

    cout << "stage 2: " << endl;
    board[0][2] = 'O';
    printBoard(board, 3);
    
    cout << boolalpha << isWinner(board, 3) << endl;





    // for(size_t i = 0; i < arrSize; i++)
    // {
    //     for(size_t j = 0; j < innerArray; j++)
    //     {
    //         cout << "&board[" << i << "][" << j << "]: "
    //                 << &board[i][j] << endl;
    //     }
    // }
    return 0;
}

void printBoard(char board[][3], size_t boardSize)
{

    for(size_t i = 0; i < boardSize; i++)
    {
        cout << "   ";
        for(size_t j = 0; j < boardSize; j++)
        {
            cout << board[i][j];
            if(j != 2)
            {
                cout << "|";
            }
        }
        
        cout << endl;
        if(i != 2)
        {
            cout << "   -----" << endl;
        }
    }
}

bool isWinner(char board[][3], size_t boardSize)
{
    //row winner
    for(size_t i = 0; i < boardSize; i++)
    {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
        {
            return true;
        }
    }

    //column winner
    for(size_t i = 0; i < boardSize; i++)
    {
        // if(board[0][i] == board[0][i] && board[0][i] == board[i][2])
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
        {
            return true;
        }
    }
    
    return false;
}














    // // int moreNumbers[10];
    // int arrSize = 5;
    // cout << "Enter an array size: ";
    // cin >> arrSize;
    // int* heapNums = new int[arrSize];
    // // int numbers[] = {42, 15, 23, 9000, -1};


    // cout << "&heapNums: " << &heapNums << endl;
    // for(size_t i = 0; i < 5; i++)
    // {
    //     cout << "&heapNums[" << i << "]: " << &heapNums[i] << endl;
    // }

    // // for(size_t i = 0; i < 10; i++)
    // // {
    // //     cout << "Please enter a number: ";
    // //     cin >> *(heapNums + i);
    // // }

    // for(size_t i = 0; i < 5; i++)
    // {
    //     cout << *(heapNums + i) << " ";
    // }
    // cout << endl;

    // int* ptr;
    // size_t arrSize = 5;
    // cout << "How many numbers do you want? ";
    // cin >> arrSize;
    // int numbers[arrSize];

    // for(size_t i = 0; i < arrSize; i++)
    // {
    //     cout << "Enter a number: ";
    //     cin >> numbers[i];
    // }

    // ptr = numbers;
    // // cout << *ptr << endl;
    // for(int i = 0; i < 5; i++)
    // {
    //     cout << *(ptr + i) << " ";
    //     // cout << *ptr << " ";
    //     // ptr--;
    // }
    // cout << endl;

    // cout << "The sum of the numbers is: " << addNums(&numbers[0], arrSize) << endl;

    // cout << numbers << endl;
    // cout << &numbers[0] << endl;
    // cout << &numbers[1] << endl;
    // cout << &numbers[2] << endl;
    // cout << &numbers[3] << endl;
    // cout << &numbers[4] << endl;

    // delete[] heapNums;

// int addNums(int*, int);

// int addNums(int* numbers, int arrSize)
// {
//     cout << sizeof(numbers) << endl;
//     int sum = 0;
//     for(int i = 0; i < arrSize; i++)
//     {
//         // sum += *(numbers + i);
//         // sum = sum + *(numbers + i);
//         sum = sum + numbers[i];
//     }
//     return sum;
// }











    



    // cout << sizeof(numbers)/sizeof(int) << endl;
    // size_t arrSize = 5;
    // cout << "How many numbers do you want? ";
    // cin >> arrSize;
    // string numbers[arrSize];

    // numbers[0] = 42;
    // numbers[1] = 15;
    // numbers[2] = 9000;
    // numbers[3] = 23;
    // numbers[4] = -8;
    // numbers[5] = 10;
    // cout << "Enter a number: ";
    // cin >> numbers[0];
    // cout << "Enter a number: ";
    // cin >> numbers[1];
    // cout << "Enter a number: ";
    // cin >> numbers[2];
    // cout << "Enter a number: ";
    // cin >> numbers[3];
    // cout << "Enter a number: ";
    // cin >> numbers[4];
    // for(size_t i = 0; i < arrSize; i++)
    // {
    //     cout << "Enter a number: ";
    //     cin >> numbers[i];
        
    // }

    // for(size_t i = 0; i < arrSize; i++)
    // {
    //     // cout << "numbers[" << i << "]: " 
    //     //      << numbers[i] << endl;
    //     cout << numbers[i] << " ";
    //     if(i == arrSize - 1)
    //     {
    //         cout << endl;
    //     }
    // }
    // cout << endl;
    // cout << "numbers[0]: " << numbers[0] << endl;
    // cout << "numbers[1]: " << numbers[1] << endl;
    // cout << "numbers[2]: " << numbers[2] << endl;
    // cout << "numbers[3]: " << numbers[3] << endl;
    // cout << "numbers[4]: " << numbers[4] << endl;
    // cout << "numbers[5]: " << numbers[5] << endl;

    // string someStrings[100];
    // int* numPtrs[100];
    // int** moreNumPtrs[100];

    // int arrSize = 10;
    // // int moreNumbers[arrSize];

    // cout << "How many numbers do you want? ";
    // cin >> arrSize;
    // int moreNumbers[arrSize];
    
