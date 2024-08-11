// Write a function which accepts a 2D array of integers and its size as arguments and displays the
// elements of middle row and the elements of middle column.
#include<iostream>
using namespace std;
void middlecolumnrow(int arr[3][3],int row,int col)
{
    int midrow = row/2;
    int midcol = col/2;
    for(int i=0;i<row;i++)
    {
        cout<<arr[i][midcol];
    }
    cout<<endl;
    for(int j=0;j<col;j++)
    {
        cout<<arr[midrow][j];
    }
}
int main()
{
    int arr[3][3]={{1,2,3},{0,0,4},{1,1,12}};
    middlecolumnrow(arr,3,3);
    
}