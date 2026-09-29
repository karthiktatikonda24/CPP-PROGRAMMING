#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: 1= <18, 2= >18" << endl;
    cin >> age;
    switch(age)
    {
        case 1:
            cout << "You are not 18 yet." << endl;
            break;
        case 2:
            cout << "You are over 18." << endl;
            break;
        default:
            cout << "Invalid input." << endl;
    }
}