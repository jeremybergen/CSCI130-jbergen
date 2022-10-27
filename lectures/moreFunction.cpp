#include <iostream>

using namespace std;

void product(const int&, const int&, int&);

int main() {
    int answer;
    cout << &answer << endl;
    answer = 123;
    product(42, 15, answer);
    // assert(answer == 42);
    // int num1, num2;
    // num1 = 42;
    // num2 = 15;
    // product(num1, num2);

    // cout << num1 << endl;
    // cout << num2 << endl;
    // cout << answer << endl;
    return 0;
}

void product(const int &n1, const int &n2, int n3) {
    cout << &n3 << endl;
    // cout << n1*n2 << endl;
    // n1 = 1;
    // n2 = 2;
    // n1 = n2*5;


    // return n1*n2;
}