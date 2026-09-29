#include <iostream>
using namespace std;
int main()
{
    bool result;
    cout << "What is your result (anything other than 1 for pass, 0 for fail): " << endl;
    cin >> result;
    cout << "Your result is: (1 for pass, 0 for fail) " << result << endl;
    return 0;
}