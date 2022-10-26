/*
Name: Jeremy Bergen

Vectors
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    vector<int> myNums;
    vector<int> myNums2;
    string firstName = "Jeremy";

    myNums.push_back(42);
    myNums.push_back(17);
    myNums.push_back(7);

    
    for(auto item: myNums) {
        cout << item << " ";
    }
    cout << endl;
    myNums.insert(myNums.begin()+2, 9000);
    // myNums.erase(myNums.end()-1);
    for(auto item: myNums) {
        cout << item << " ";
    }
    cout << endl;
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
    return 0;
}