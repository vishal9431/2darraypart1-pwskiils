// Write a program to add two matrices and save the result in one of the given matrices.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9

// 4 5 8
// 0 0 8
// 1 2 0
// Output 1:
// 5 7 11
// 4 5 14
// 8 10 9
#include<iostream>
using namespace std;
int main()
{
    int arr[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    int arr2[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr2[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            arr[i][j]=arr[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}