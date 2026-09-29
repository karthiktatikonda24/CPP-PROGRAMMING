#include <iostream>
using namespace std;
int main()
{
    int date, month;
    cout<< "What is your birthday date in dd: " <<endl;
    cin>> date;
    if(date==27)
    {
      cout<< "What is your birthday month in mm: " <<endl;  
      cin>>month;
      if (month==2)
      {
        cout<<"I love you" <<endl;
      }
      else
      {
        cout<<"I don't love you" <<endl;
      }
    }
    else
    {
        cout<<"I don't love you" <<endl;
    }
}