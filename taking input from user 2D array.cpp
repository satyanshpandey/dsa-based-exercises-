#include<iostream>
#include<vector>
using namespace std;

int main(){

    // vector<int>arr[4][3];
    int arr[4][3];

    int row = 4;
    int col = 3;
    cout<<"Enter values:";
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            /* code */
            cin>>arr[i][j];
        }
        
    }
    cout<<"After taking input from user : here is the complete 2D array:"<<endl;
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // // declare 2d array 
    // int arr[3][4];
    // //initialize 2d array 
    // int brr[2][2] = {
    //     {1,2},
    //     {2,3}
    // };
}