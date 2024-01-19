#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<vector<int>> arr{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int colsum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)   
        {
            colsum = colsum+arr[j][i];
        }
        cout<<"Column sum is:"<<colsum<<endl;
        colsum = 0;
    }
    
}