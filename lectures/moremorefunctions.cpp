#include <iostream>

using namespace std;

double coolGuy(const string&, int&);
void findAverage(const double&, const double&, double&);

int main(int argc, char * argv[]) {
    string notCoolGuyName;
    int notOtherCoolGuy;
    double answer;

    notCoolGuyName = "Bob";
    notOtherCoolGuy = 420;

    answer = coolGuy(notCoolGuyName, notOtherCoolGuy);
    cout << answer << endl;

    findAverage(42, 15, answer);

    return 0;
}

double coolGuy(const string &otherOtherCoolGuy, int &otherCoolGuy) {
    otherOtherCoolGuy = "Wayne";
    otherCoolGuy = 69;
    return otherCoolGuy;
}