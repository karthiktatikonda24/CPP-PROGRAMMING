#include <iostream>
using namespace std;
void printarray(int arr[], int size)
{
    for(int index=0;index<=(size-1);index++)
    {
        cout<<arr[index]<< " ";
    }
    cout<<endl;
}
void zerotooneandonetozero(int arr[],int size)
{
      for(int index = 0; index <= (size-1) ;index++)
      {
       if (arr[index]==1)
       {
         arr[index]=0;
       }
       else
       {
         arr[index]=1;
       }
      }
      cout<<"Final: ";
      printarray(arr,size);
}


int main(void)
{
    int arr[8]={1,0,0,0,1,1,0,0};
    int size = 8;
    cout<<"Initial: ";
    printarray(arr,size);
    zerotooneandonetozero(arr,size);
}