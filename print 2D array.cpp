#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // printing 2D array row wise :
    cout<<" printing 2D array row wise :"<<endl;
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // printing array column wise :
    cout<<"printing array column wise :"<<endl;
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    
}