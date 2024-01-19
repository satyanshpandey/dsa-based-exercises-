#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr {1,1,1,0,0,0,2,2,1,1};
    int l=0;
    int m=0;
    int h=arr.size()-1;

    while (m<=h)  //or one more condition : when mediam is greater then high , (m>h) 
    {
        /* code */
        if (arr[m]==0)
        {
            swap(arr[l],arr[m]);
            l++;
            m++;
        }
        else if (arr[m]==1)
        {
            m++;
        }
        else if (arr[m] == 2)
        {
            swap(arr[m],arr[h]);
            h--;
        }
    }
    
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}