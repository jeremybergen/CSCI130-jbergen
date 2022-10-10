/*
Name: Jeremy Bergen

All About Arrays
*/
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    // int nums[] = {42, 15, -9, 9000, -14323};
    unsigned int arrSize;


    cout << "Please enter a size of the array: ";
    cin >> arrSize;
    
    int nums[arrSize];

    cout << sizeof(nums)/sizeof(int) << endl;

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

    return 0;
}