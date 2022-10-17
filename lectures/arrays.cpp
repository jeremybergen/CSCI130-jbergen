/*
Name: Jeremy Bergen

All About Arrays
*/
#include <iostream>
#include <cassert>

using namespace std;

// using big_int = long long int;
// typedef long long int large_int;

template <class T1>
void promptNumbers(T1*, int);

template <class T1>
void printArray(T1*, int);

template <class T1>
void swapem(T1*, int, int);

template <class T1>
void bubbleSort(T1*, int);

void printBoard(char[][3], int);

int main(int argc, char *argv[]) {
    // int numbers[5][3] = {};
    // int *ptr;
    char board[3][3] = {};

    board[0][0] = 'X';
    board[0][2] = 'O';
    board[1][0] = 'O';
    board[1][1] = 'X';
    board[2][0] = 'O';
    board[2][2] = 'X';

    printBoard(board, 3);

    // for (size_t i = 0; i < 5; i++) {
    //     for (size_t j = 0; j < 3; j++) {
    //         numbers[i][j] = i+j;
    //     }
    // }

    // cout << numbers << endl;
    // cout << numbers[0] << endl;
    // cout << &numbers[0][0] << endl;

    // ptr = &numbers[0][0];

    // for (size_t i = 0; i < 15; i++) {
    //     cout << *ptr << endl;
    //     ptr++;
    // }
    // ptr++;
    // cout << &numbers << endl;
    // cout << &numbers[0] << endl;


    // cout << endl;
    // numbers[0][0] = 42;
    // numbers[1][1] = 24;
    // int arrSize;
    

    // cout << "Please enter the number of elements: ";
    // cin >> arrSize;

    // long *nums = new long[arrSize];

    // promptNumbers<long>(nums, arrSize);

    // printArray<long>(nums, arrSize);
    // cout << "Sorting: " << endl;

    // bubbleSort<long>(nums, arrSize);

    return 0;
}

void printBoard(char board[][3], int arrSize) {
    for(size_t i = 0; i < 3; i++) {
        for(size_t j = 0; j < 3; j++) {
            if (board[i][j] == 0) {
                cout << " ";
            }
            cout <<  board[i][j];
            if (j != 2) {
                cout << "|";
            }
        }
        
        cout << endl;
        if (i != 2) {
            cout << "-----" << endl;
        }
    }
}

template <class T1>
void bubbleSort(T1 *numbers, int arrSize) {
    bool swapped;
    for (size_t i = 0; i < arrSize; i++) {
        swapped = false;
        // cout << "DEBUG: i: " << i << endl;
        for (size_t j = 0; j < arrSize-i-1; j++) {
            // cout << "DEBUG: j: " << j << endl;
            if(numbers[j] > numbers[j+1]) {
                swapem<T1>(numbers, j, j+1);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
        printArray<T1>(numbers, arrSize);
    }

}

template <class T1>
void swapem(T1 *numbers, int idx1, int idx2) {
    T1 tmp = numbers[idx2];
    numbers[idx2] = numbers[idx1];
    numbers[idx1] = tmp;
}

template <class T1>
void printArray(T1 *numbers, int arrSize) {
    for(size_t i = 0; i < arrSize; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

template <class T1>
void promptNumbers(T1 *numbers, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        cout << "Please enter a number: ";
        cin >> numbers[i];
    }
}





    // swapem(nums, 0, 3);
    // printArray(nums, arrSize);

    // int *nums;

    // nums = promptNumbers(5);

    // // int nums[5];
    // // int *nums2 = new int[5];

    // // promptNumbers(nums2, 5);

    // for (size_t i = 0; i < 5; i++) {
    //     cout << "nums[" << i << "]: " << nums[i] << endl;
    // }

    // // int nums[10];
    // // int moreNums[10];
    // int *nums = new int[10];
    // int *moreNums = new int[10];

    // for (size_t i = 0; i < 10; i++) {
    //     nums[i] = i * 10;
    //     cout << &nums[i] << endl;
    // }

    // for (size_t i = 0; i < 10; i++) {
    //     cout << &moreNums[i] << endl;
    // }

    // moreNums = nums;

    // cout << "After changing pointers: " << endl;
    // for (size_t i = 0; i < 10; i++) {
    //     nums[i] = i * 10;
    //     cout << &nums[i] << endl;
    // }

    // for (size_t i = 0; i < 10; i++) {
    //     cout << &moreNums[i] << endl;
    // }
    // // for (size_t i = 0; i < 10; i++) {
    // //     moreNums[i] = nums[i];
    // // }

    // for (size_t i = 0; i < 10; i++) {
    //     // cout << "nums[" << i << "]: " << moreNums[i] << endl;
    // }






    // int nums[] = {42, 15, -9, 9000, -14323};
    // unsigned long arrSize = 4000000000/sizeof(int);
    // size_t arrSize = 5;
    // int *nums = new int[arrSize];
    // int *nums2 = new int[arrSize];

    // nums[0] = 42;

    // cout << "&nums[0]: " << &nums[0] << endl;
    // cout << "&nums2[0]: " << &nums2[0] << endl;
    // nums2 = nums;

    // cout << "&nums[0]: " << &nums[0] << endl;
    // cout << "&nums2[0]: " << &nums2[0] << endl;
    // int *nums = new int[arrSize];

    // big_int num1;
    // large_int num1Again;
    // long long int num1YetAgain;

    // cout << sizeof(long long int) << endl;
    // cout << sizeof(big_int) << endl;
    // cout << sizeof(large_int) << endl;

    // for (size_t i = 0; i <4000000000/sizeof(int); i++) {
    //     nums[i] = i;
    // }
    // nums[999999] = 42;

    // cout << *(nums + 999999) << endl;
    // cout << nums[999999] << endl;
    // int *ptr;

    // for (size_t i = 0; i < arrSize; i++) {
    //     cout << &nums[i] << endl;
    //     // cout << "nums[" << i << "]: " << nums[i] << endl;
    // }

    // ptr = &nums[0];

    // int ptrSize = sizeof(nums)/sizeof(int);
    // for (size_t i = 0; i < ptrSize; i++) {
    //     cout << *ptr << endl;
    //     ptr++;
    // }
    // cout << "num1: " << num1 << endl;
    // cout << "num2: " << num2 << endl;


    // cout << "Please enter a size of the array: ";
    // cin >> arrSize;
    
    // int nums[arrSize];

    // cout << sizeof(nums)/sizeof(int) << endl;

    // for (unsigned int i = 0; i < arrSize; i++) {
    //     cout << "Please enter a number: ";
    //     cin >> nums[i];
    // }

    // for (size_t i = 0; i < arrSize; i++) {
    //     cout << "nums[" << i << "]: " << nums[i] << endl;
    // }
    // for (int i = 0; i < 5; i++) {
    //     cout << "Please enter a number: ";
    //     cin >> nums[i];
    // }

    // for (int i = 0; i < 5; i++) {
    //     cout << "nums[" << i << "]: " << nums[i] << endl;
    // }

    // nums[0] = 42;
    // nums[1] = 15;
    // nums[2] = -9;
    // nums[3] = 9000;
    // nums[4] = -14323;

    // cout << "nums[0]: " << nums[0] << endl;
    // cout << "nums[1]: " << nums[1] << endl;
    // cout << "nums[2]: " << nums[2] << endl;
    // cout << "nums[3]: " << nums[3] << endl;
    // cout << "nums[4]: " << nums[4] << endl;

    // DON'T DO!!!!
    // nums[5] = -10;
    // cout << "nums[5]: " << nums[5] << endl;

