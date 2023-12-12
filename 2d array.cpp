#include<iostream>
#include<vector>
using namespace std;

int main(){

    // declare 2d array of 3x3
    int arr[3][3];

    // initialization 
    int brr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    cout<<brr[0][0];
    cout<<brr[0][1];
    cout<<brr[0][2];
    cout<<endl;

    cout<<brr[1][0];
    cout<<brr[1][3];
    cout<<brr[1][2];
    cout<<endl;

    cout<<brr[2][0];
    cout<<brr[2][1];
    cout<<brr[2][2];
    cout<<endl;



}