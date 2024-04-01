/*
Name: Jeremy Bergen

Vectors
*/
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
    // int numbers[5] = {1, 2, 3, 4, 5};
    // int* numbers2;

    // numbers2 = numbers;
    // int numbers2[5];

    // for(int i = 0 ; i < 5; i++)
    // {
    //     numbers2[i] = numbers[i];
    // }

    vector<int> myVec({42, 15, 23, 9000, -1, 5});
    vector<int> myVec2;
    vector<string> myStrings;

    myVec2 = myVec;



    cout << "myVec.size(): " << myVec.size() << endl;
    cout << "myVec.capcity(): " << myVec.capacity() << endl;

    myVec.push_back(42);

    cout << "myVec.size(): " << myVec.size() << endl;
    cout << "myVec.capcity(): " << myVec.capacity() << endl;

    for(size_t i = 0; i < myVec.size(); i++)
    {
        // cout << myVec.at(i) << " ";
        cout << myVec[i] << " ";
    }

    // for(auto item : myVec)
    // {
    //     cout << item << " ";
    // }
    cout << endl;

    cout << myVec.front() << " " << myVec.back() << endl;

    myVec.pop_back();

    cout << myVec.back() << endl;

    myVec.clear();

    cout << "myVec.size(): " << myVec.size() << endl;
    cout << "myVec.capcity(): " << myVec.capacity() << endl;

    // myVec.push_back(23);

    // cout << "myVec.size(): " << myVec.size() << endl;
    // cout << "myVec.capcity(): " << myVec.capacity() << endl;

    // myVec.push_back(15);

    // cout << "myVec.size(): " << myVec.size() << endl;
    // cout << "myVec.capcity(): " << myVec.capacity() << endl;

    // int numbers[5] = {1, 2, 3, 4, 5};
    // int* ptr;

    // ptr = numbers;
    // for(int i = 0; i < 5; i++)
    // {
    //     cout << *ptr << endl;
    //     ptr++;
    // }

    return 0;
}