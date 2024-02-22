/*
Name: Jeremy Bergen

Lunch Picker
*/
#include <iostream>

using namespace std;

string promptName();
void greetName(string);
void getThings(string&, float&, int&, string&);
void lunchPicker(const string&, const float&, const int&, const string&);

int main()
{
    // string person;
    // person = promptName();
    // greetName(person);
    string pType;
    float money;
    int distance;
    string mood;

    greetName(promptName());

    getThings(pType, money, distance, mood);

    lunchPicker(pType, money, distance, mood);

}

void lunchPicker(const string& pType, const float& money, const int& distance, const string& mood)
{
    //pType: [meat/veggies/fish]
    //money: amount $
    //distance: 
    //mood: fast/sit/togo

    //Five Guys
    //Texas Roadhouse
    //Waffle House
    //Raising Cane's
    //Koi Sushi Ramen
    //Pho 88
    //Los Jilberto's
    if(money < 10)
    {
        if(distance > 150)
        {
            if (mood == "togo" || mood == "fast")
            {
                cout << "You're going to Raising Cane's" << endl;
            } else
            {
                cout << "Yay, Waffle House" << endl;
            }
            //Raising Cane's
            //Waffle House
        } else
        {
            cout << "Get some super fries at Los J's" << endl;
            //Los Jilberto's
        }
    }
    else if(money < 20)
    {
        if(pType == "veggies" || pType == "fish") 
        {
            cout << "Noodle at Pho 88" << endl;
        } else
        {
            cout << "A bacon cheesburger with fries from Five Guys" << endl;
        }
        //Five Guys
        //Pho 88
    }
    else
    {
        if(mood == "fish") 
        {
            cout << "Get some sushi and ramen at Koi Sushi Ramen" << endl;
        } else
        {
            cout << "Goto Texas Roadhouse" << endl;
        }
        //Texas Roadhouse
        //Koi Sushi Ramen
    }
}

void getThings(string& pType, float& money, int& distance, string& mood)
{
    cout << "What protein type [meat/veggies/fish]? ";
    cin >> pType;

    cout << "How much money do you want to spend? ";
    cin >> money;

    cout << "How far do you want to go? ";
    cin >> distance;

    cout << "What type of food [fast/sit/togo]? ";
    cin >> mood;
}

string promptName()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    return name;
}

void greetName(string name)
{
    if(name == "Burton" || name == "Pat Sajak")
    {
        cout << "You don't deserve chai tea" << endl;
    } else
    {
        cout << "Welcome to our lunch picker " << name << "." << endl;
    }
}