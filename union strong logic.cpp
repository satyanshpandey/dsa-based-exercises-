#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int main(){

    vector<int>arr = {1,2,2,3,3,4};
    vector<int>brr = {2,2,3,3};
    vector<int>ans = {arr[0]};


    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        /* code */
        // checking duplicate present or not? 
        for (int j = 0; j < ans.size(); j++)
        {
            /* code */ 
            if (element != ans[j])
            {
                /* code */
                ans.push_back(element);
                break;
            }
            if (element == ans[j])
            {
                /* code */
                break;
            }
           
            
            
        }
        
    }
    
for(int values : ans){
    cout<<" : "<<values;
}

}