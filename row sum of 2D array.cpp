#include<iostream>
#include<vector>
using namespace std;

void printingv(int arr[][3] , int row , int col){
    int rowSum = 0;
    cout<<"Row sum is:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            /* code */
            rowSum = rowSum + arr[i][j];
            
        }
        cout<<rowSum<<" ";
        rowSum = 0;
    }
}

int main(){
    //printing row sum of 2-D array:

    int row = 3;
    int col = 3;
    // this is our 2D array (3x3)
    int arr[3][3] = {
        {1,2,3},
        {3,4,5},
        {5,6,7}
    };
// cout<<"Row sum is:"<<endl;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             /* code */
//             rowSum = rowSum + arr[i][j];
            
//         }
//         cout<<rowSum<<" ";
//         rowSum = 0;
//     }

printingv(arr,row,col);
    
    
}