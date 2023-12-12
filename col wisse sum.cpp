#include<iostream>
#include<vector>
using namespace std;

void colSum(int arr[3][3], int rows , int cols){
    // column wise traversal    
    for (int i = 0; i < rows; i++)
    {
        /* code */
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            /* code */
            sum = sum + arr[j][i];
        }
   cout<<"Column wise sum is: "<<sum<<endl;     
    }
    
}

int main(){

int rows = 3;
int cols = 3;
int arr[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};

colSum(arr,rows,cols);


}