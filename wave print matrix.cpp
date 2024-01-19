#include<iostream>
#include<vector>
using namespace std;

int main(){

    // CREATING 2D ,MATRix 
    vector<vector<int> >v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int m = v.size();
    int n = v[0].size();
    
    for (int startingCol = 0; startingCol < n; startingCol++)
    {
        if ((startingCol & 1)==0 )
        {
            for (int i = 0; i < m; i++)
            {
                cout<<v[i][startingCol]<<" ";
            }            
        }
        else{
            for (int i = m-1; i >=0; i--)
            {
                cout<<v[i][startingCol]<<" ";
            }
            
        }
        
    }
    
} 