#include<iostream>
using namespace std; 

void transpose(int arr[][3], int row , int col ,int transpose_matrix[][3]){
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            /* code */
            swap(arr[i][j], transpose_matrix[j][i]);
            
        }
        
    }
    
}

int main(){
    int row = 3;
    int col = 3;
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

//creating another empty array for collection swapping transpose data from 
// swaaping "transpose matrix".
/**
 we are creating here an empty array fror store the swapping data ,
 because we thinking many times about logic but in my mind 
there is no logic is clicked then we decided it to store into another arrays and print transpose matrix.
*/

int transpose_matrix[3][3]; // --------------------------------


 // printing values 
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            /* code */
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

cout<<"After calling matrix"<<endl;

    transpose(arr, row , col , transpose_matrix);

    // printing values 
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            /* code */
            cout<<transpose_matrix[i][j]<<" ";
        }
        cout<<endl;
    }  
}