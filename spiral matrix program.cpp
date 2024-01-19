#include<iostream>
#include<vector>
using namespace std;
int main(){

    // creaking an 2d matrix for printing spiral matrix 
    vector<vector<int>> matrix{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
        // ,{13,14,15,16}
    };

    //creating an empty vector for stroing all spiral element of the 2d matrix .
    vector<int>ans;

    //creating variables 
    int m = matrix.size(); //no. of row 
    int n = matrix[0].size(); //no. of col 
    int total = m*n; // total no. of matrix element 

    //important variable for traversing 
    int startRow = 0; //starting row 
    int endrow = m-1; // last index of ending row
    int startcol = 0; // strating coloum 
    int endcol = n-1; //ending col

    int count = 0; // it used for checking loop break condition 

    while (count<total) 
    {
        //printing starting row elements 
        for (int i = startcol; i <= endcol; i++)
        {
            ans.push_back(matrix[startRow][i]);
            count++;
        }
        startRow++;

        //printing ending column 
        for (int i = startRow; i<= endrow; i++)
        {
            ans.push_back(matrix[i][endcol]);
            count++;
        }
        endcol--;

        //printing row
        for (int i = endcol; i >=startcol; i--)
        {
            ans.push_back(matrix[endrow][i]);
            count++;
        }
        endrow--;

        //printing start column 
        for (int i = endrow; i >=startRow; i--)
        {
            ans.push_back(matrix[i][startcol]);
            count++;
        }
        startcol++;
        
        

        
    }




    //printing spiral matrix element 
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
}