/*
Name: Jeremy Bergen
*/
#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

const float epsilon = 1e-5; // 0.00001

template <class T1, class T2>
double coolGuy(T1, T2);
void tests();

int main(int argc, char *argv[]) {
    int num1, num2;
    double answer;

    // tests();

    cout << "Please enter two numbers: ";

    cin >> num1 >> num2;

    answer = coolGuy<int, int>(num1, num2);
    cout << "CoolGuy says: " << answer << endl;

    return 0;
}

void tests() {
    double answer = coolGuy<int, int>(2, 3);
    double expected = 3.66985;
    assert(abs(answer - expected) <= epsilon);
    cout << "All test cases passed" << endl;
}

template <class T1, class T2>
double coolGuy(T1 n1, T2 n2) {
    // double result = pow((n1 * n2)/5.1, 8);
    double result = (int)pow((n1 * n2)/5.1, 8) % (int)n2;
    return result;
}