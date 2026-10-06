#include <iostream>
using namespace std;

    void printarray(int arr[], int size)
    {
        for(int i=0; i<size; i++)
        {
            cout << "The value of array[" << i << "] is: " << arr[i] << endl;
        }
    }
    int main(void)
    {

        int arr[5];
        int size = 5;
        for(int i=0;i<=4;i++)
        {
            cout<<"Enter the value of array [" <<i<< "]: ";
            cin>> arr[i];
    
        }
        printarray(arr, size);
        return 0;
    }