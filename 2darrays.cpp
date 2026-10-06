#include <iostream>
using namespace std;
void takinginput(int arr[][5],int rows,int columns)
{
        
    int row_value,column_value;
    for(int row_index=0;row_index<=(rows-1);row_index++)
    {
        for(int column_index=0;column_index<=(columns-1);column_index++)
        {
            cout<<"Enter the value of the 2d array arr[" << row_index << "] [" << column_index << "]: "; 
            cin>>row_value;
        }
        cout<<endl;
    }
}

void printing2darray(int arr[][5],int rows,int columns)
{
  for(int row_index=0;row_index<=(rows-1);row_index++)
    {
        for(int column_index=0;column_index<=(columns-1);column_index++)
        {
            cout<<arr[row_index][column_index]<<" ";
        }
        cout<<endl;
    }
}
int main(void)
{
    int rows,columns;
    int arr[5][5];
    rows=5;
    columns=5;
    takinginput(arr,rows,columns);
    printing2darray( arr,rows,columns);
}