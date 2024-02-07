#include<iostream>
#include<vector>
using namespace std;


// two pointer approach sort 0s n 1s.
int sort___(vector<int> & arr){
    int l = 0;
    int h = arr.size()-1;
    while (l<h)
    {
        if (arr[l]==0)
        {
            l++;
        }
        if (arr[h]==1)
        {
            h--;
        }
        else{
            swap(arr[l],arr[h]);
        }
            
    }
    
}

// sorting using 3 pointer approach 
int sort(vector<int>&arr2){
    int l = 0;
    int pointerVariable = 0;
    int h = arr2.size()-1;

    while (pointerVariable<h)
    {
        if (arr2[pointerVariable]==0)
        {
            swap(arr2[l],arr2[pointerVariable]);
            l++;
            pointerVariable++;
        }
        if (arr2[pointerVariable]==1)
        {
            swap(arr2[pointerVariable],arr2[h]);
            h--;
        }
        
        
    }
    
}

// sort using STL 

#include<algorithm>
int sorting2(vector<int>&arr3){
    sort(arr3.begin(),arr3.end());

}


int main(){
    vector<int>arr {0,1,1,1,0,0,1,0,1,1,1,1,0};

    vector<int>arr2 {0,1,1,1,0,0,1,0,1,1,1,1,0};

    vector<int>arr3 {0,1,1,1,0,0,1,0,1,1,1,1,0};
    sort___(arr);

    // after sorting all values are:

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
cout<<endl;

    sort(arr2);
    for (int i = 0; i < arr2.size(); i++)
    {
        cout<<arr2[i]<<" ";
    }


cout<<endl;

    sorting2(arr3);
    for (int i = 0; i < arr2.size(); i++)
    {
        cout<<arr3[i]<<" ";
    }

}
