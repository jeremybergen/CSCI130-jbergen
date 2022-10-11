/*
Name: Jeremy Bergen

All About Arrays
*/
#include <iostream>
#include <cassert>

using namespace std;

using big_int = long long int;
typedef long long int large_int;

int main(int argc, char *argv[]) {
    // int nums[] = {42, 15, -9, 9000, -14323};
    // unsigned long arrSize = 4000000000/sizeof(int);
    size_t arrSize = 5;
    int *nums = new int[arrSize];
    int *nums2 = new int[arrSize];

    nums[0] = 42;

    cout << "&nums[0]: " << &nums[0] << endl;
    cout << "&nums2[0]: " << &nums2[0] << endl;
    nums2 = nums;

    cout << "&nums[0]: " << &nums[0] << endl;
    cout << "&nums2[0]: " << &nums2[0] << endl;
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

    return 0;
}
