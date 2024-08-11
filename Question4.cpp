// Q4: Write a C++ program to find the largest element of a given 2D array of integers.
#include<iostream>
using namespace std;
int main()
{
    int arr[4][4]={{1,2,-3,4},{0,0,-4,2},{1,-1,2,3},{-4,-5,7,0}};
    int maxi=INT_MIN;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]>maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    cout<<"Maximum in 2D array is : "<<maxi<<endl;
}