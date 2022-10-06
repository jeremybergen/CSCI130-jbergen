/*
Name: Jeremy Bergen
*/
#include <iostream>

using namespace std;

template <class T1, class T2>
T1 add2Nums(T1, T2);
// float add2Nums(float, float);
// float add2Nums(float, int);
// float add2Nums(int, float);

int main(int argc, char *argv[]) {
    float num1;
    float num2;
    float answer;

    num1 = 42.5;
    num2 = 15.4;

    answer = add2Nums<float, float>(num1, num2);

    cout << answer << endl;
    return 0;
}

template <class T1, class T2>
T1 add2Nums(T1 n1, T2 n2) {
    T1 total;
    cout << "Inside int function" << endl;
    total = n1 + n2;

    return total;
}

// float add2Nums(float n1, float n2) {
//     float total;
//     cout << "Inside float function" << endl;
//     total = n1 + n2;

//     return total;
// }