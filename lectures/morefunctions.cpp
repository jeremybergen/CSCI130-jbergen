/*
Name: Jeremy Bergen

Function overloads and templates
*/
#include <iostream>
#include <string>
#include <cassert>
#include <cmath>

using namespace std;

template <class whateverYouWant, class T2>
whateverYouWant addNums(whateverYouWant, T2);
// int addNums(int, int);
// float addNums(float, float);
// float addNums(int, float);
// float addNums(float, int);
// float addNums(float, int, float);
void tests();

//int main(int argc, char **argv) {
int main(int argc, char *argv[]) {
    int num1;
    int num2;
    float total;

    // cout << "argc is: " << argc << endl;
    // cout << "argv is: " << argv[1] << endl;

    if (argc == 2 && argv[1] == (string)"test") {
        tests();
        return 0;
    }

    cout << "Please enter two numbers separated by a space: ";
    cin >> num1 >> num2;

    total = addNums<int, int>(num1, num2);

    cout << num1 << " + " << num2 << " = "
         << total << endl;

    return 0;
}

void tests() {
    int result;
    result = addNums<int, int>(2, 4);
    assert(result == 6);
    cout << "All test cases passed" << endl;
}
template <class whateverYouWant, class T2>
whateverYouWant addNums(whateverYouWant n1, T2 n2) {
    whateverYouWant total;

    total = n1 + n2;

    return total;
}

// int addNums(int n1, int n2) {
//     cout << "Inside int function" << endl;
//     int total;

//     total = n1 + n2;

//     return total;
// }

// float addNums(float n1, float n2) {
//     cout << "Inside float function" << endl;
//     float total;

//     total = n1 + n2;

//     return total;
// }

// float addNums(int n1, float n2) {
//     cout << "Inside int, float function" << endl;
//     float total;

//     total = n1 + n2;

//     return total;
// }

// float addNums(float n1, int n2) {
//     cout << "Inside float, int function" << endl;
//     float total;

//     total = n1 + n2;

//     return total;
// }

// float addNums(float n1, int n2, float n3) {
//     cout << "Inside float, int, float function" << endl;
//     float total;

//     total = n1 + n2 + n3;

//     return total;
// }