#include<iostream>
#include<limits.h>
using namespace std;

int minNum(int arr[][3] , int minN, int row, int col){
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            /* code */
            if (arr[i][j]<minN)
            {
                /* code */
                minN = arr[i][j];
            }            
        }        
    }
    return minN;
}

int maxNum(int arr[][3], int maxN, int row, int col){
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            /* code */
            if (arr[i][j]>maxN)
            {
                /* code */
                maxN = arr[i][j];
            }   
        }
    }
    return maxN;
}

int main()
{
    int maxN = INT_MIN; // 
    int minN = INT_MAX; // 
    int row = 3;
    int col = 3;
    // array
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // calling functions 
    cout<<"minimum number of this 2D array is:"<<minNum(arr, minN, row, col)<<endl;
    cout<<"Maximum number of this 2D arrays is :"<<maxNum(arr, maxN,row,col)<<endl;
}