/*
Name: Jeremy Bergen

Vectors
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

template <class T1>
void printVector(vector<T1>&);

int main(int argc, char *argv[]) {
    vector<int> myNums;
    vector<int> myNums2;
    vector<string> myNames;

    // vector< vector<int> > nestedNums;

    // nestedNums.push_back({1, 2, 3, 4});
    // nestedNums.push_back(vector<int>());
    // cout << nestedNums.size() << endl;
    // cout << nestedNums.at(0).size() << endl;
    // nestedNums.at(1).push_back(42);
    // cout << nestedNums.at(0).at(2) << endl;

    // string firstName = "Jeremy";

    myNums.push_back(42);
    myNums.push_back(7);
    myNums.push_back(12);

    printVector<int>(myNums);
    sort(myNums.rbegin(), myNums.rend());
    printVector<int>(myNums);

    // myNames.push_back("Jeremy");
    // myNames.push_back("Bergen");
    // myNames.push_back("The Almighty Tallest");

    // myNums = printVector<int>(myNums);
    // myNums = printVector<int>(myNums);
    // myNums = printVector<int>(myNums);

    return 0;
}

template <class T1>
void printVector(vector<T1> &otherVector) {
    for(size_t i = 0; i < otherVector.size(); i++) {
        cout << otherVector.at(i) << " ";
        // cout << otherVector[i] << endl;
    }
    cout << endl;
    // otherVector.erase(otherVector.begin());
    // return otherVector;
}







    
    // for(auto item: myNums) {
    //     cout << item << " ";
    // }
    // cout << endl;
    // myNums.insert(myNums.begin()+2, 9000);
    // // myNums.erase(myNums.end()-1);
    // for(auto item: myNums) {
    //     cout << item << " ";
    // }
    // cout << endl;
    // myNums.erase(myNums.end()-1);
    // for(auto item: myNums) {
    //     cout << item << " ";
    // }
    // cout << endl;
    // myNums.erase(myNums.begin());
    // for(auto item: myNums) {
    //     cout << item << " ";
    // }
    // cout << endl;
    // myNums.erase(myNums.begin());
    // for(auto item: myNums) {
    //     cout << item << " ";
    // }
    // cout << endl;
    // myNums.erase(myNums.begin());
    // for(auto item: myNums) {
    //     cout << item << " ";
    // }
    // cout << endl;

    // cout << "myNums.size(): " << myNums.size() << endl;
    // cout << "myNums2.size(): " << myNums2.size() << endl;
    // myNums2 = myNums;
    // cout << "myNums.size(): " << myNums.size() << endl;
    // cout << "myNums2.size(): " << myNums2.size() << endl;
    // myNums2.erase(myNums2.begin());
    // cout << "myNums.size(): " << myNums.size() << endl;
    // cout << "myNums2.size(): " << myNums2.size() << endl;


    // cout << myNums.size() << endl;
    // myNums.front();
    // cout << myNums.size() << endl;
    // cout << myNums.back() << endl;
    // for(int item: myNums) {
    //     cout << item << endl;
    // }
    // for (auto it = myNums.rbegin(); it != myNums.rend(); it++) {
    //     cout << *it << endl;
    // }
    // for(size_t i = 0; i < myNums.size(); i++) {
    //     cout << myNums.at(i) << endl;
    // }
    // cout << firstName.at(6) << endl;
    // cout << firstName[6] << endl;
    // cout << myNums.at(3) << endl;
    // cout << myNums[3] << endl;