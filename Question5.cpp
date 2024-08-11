// Q5: Write a program to print the row number having the maximum sum in a given matrix.
#include<iostream>
using namespace std;
int main()
{
    int arr[4][4]={{1,2,3,4},{0,0,4,2},{1,1,12,3},{4,5,1,0}};
    int maxidx=0;
    int maxno =INT_MIN;
    for(int i=0;i<4;i++)
    {
        int sum=0;
        for(int j=0;j<4;j++)
        {
            sum+=arr[i][j];
        }
        if(maxno<sum)
        {
            maxidx =i;
            maxno = sum;
        }
    }
    cout<<" maximum sum row is "<<maxidx+1;
}