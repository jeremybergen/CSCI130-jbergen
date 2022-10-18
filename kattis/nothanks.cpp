/*
Name: Jeremy Bergen

Kattis no thanks
*/
#include <iostream>
#include <algorithm>

using namespace std;

void bubbleSort(int[], size_t);
void swapem(int[], int, int);

int main(int argc, char *argv[]) {
    size_t numberOfNumbers;
    int total = 0;

    cin >> numberOfNumbers;

    int numbers[numberOfNumbers];

    for(size_t i = 0; i < numberOfNumbers; i++) {
        cin >> numbers[i];
    }

    // cout << "DEBUG: BEFORE SORT: " << endl;
    // for(size_t i = 0; i < numberOfNumbers; i++) {
    //     cout << numbers[i] << " ";
    // }
    // cout << endl;

    // bubbleSort(numbers, numberOfNumbers);
    sort(numbers, numbers+numberOfNumbers);
    // cout << "DEBUG: AFTER SORT: " << endl;
    // for(size_t i = 0; i < numberOfNumbers; i++) {
    //     cout << numbers[i] << " ";
    // }
    // cout << endl;

    for(int i = numberOfNumbers-1; i >= 0; i--) {
        int currentNumber = numbers[i];

        // cout << "DEBUG: i: " << i << endl;
        // cout << "DEBUG: currentNumber: " << currentNumber << endl;
        if (i != 0 && currentNumber-1 == numbers[i-1]) {
            continue;
        }
        total += currentNumber;
    }

    cout << total << endl;

    return 0;
}

void bubbleSort(int numbers[], size_t arrSize) {
    bool swapped;
    for(size_t i = 0; i < arrSize; i++) {
        swapped = false;
        for(size_t j = 0; j < arrSize-i-1; j++) {
            if (numbers[j] > numbers[j+1]) {
                swapem(numbers, j, j+1);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void swapem(int numbers[], int idx, int idx2) {
    int tmp = numbers[idx];
    numbers[idx] = numbers[idx2];
    numbers[idx2] = tmp;
}