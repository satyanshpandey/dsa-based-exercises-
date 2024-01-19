#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int>arr {6,5,4,3,3,1};
for (int i = 0; i < arr.size(); i++)
{
    // index 
    int index = abs(arr[i]);

    if (arr[index-1]>0)
    {
        arr[index-1] *= -1;
        // cout<<"Duplicate n :"<<index;
    }
    
}
for (int i = 0; i < arr.size(); i++)
{
    cout<<arr[i]<<"  --------- ";
}

cout<<endl;
for (int i = 0; i < arr.size(); i++)
{
        if (arr[i]>0)
        {
            cout<<"All +ve: missing "<<arr[i+1]<<" ";
        }
        
    
}



}