#include <iostream>
using namespace std;

int main(void)
{
  int arr[5];
  for(int i=0;i<=4;i++)
  {
    cout<< "Enter the value of arr[" << i << "]: ";
    cin>> arr[i];
  }
  for(int i=0;i<=4;i++)
  {
    cout<< "The value of arr[" << i << "] is: " << arr[i] << endl;
  }
  return 0;
}