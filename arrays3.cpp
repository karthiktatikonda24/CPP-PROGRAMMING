#include <iostream>
using namespace std;

void multitable(int arr[],int size,int num)
{   
    cout<<"The multiplication table for "<< num << " is:" << endl;
    for(int i=0;i<=(size-1);i++)
    {
        cout << num << " * " << i+1 << " = " << arr[i] << endl;
    }
}
int main(void)
{
    int j;
    int arr[10];
    int size = 10;
    cout << "Enter a number for which you need the multiplication table: " ;
    cin>>j;
    for(int i=0;i<=(size-1);i++)
    {
        arr[i] = j*(i+1);
    }
    multitable(arr,size,j);
    return 0;
}