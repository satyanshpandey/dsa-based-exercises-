#include<iostream>
#include<vector>
using namespace std;

int fidnMissingElement(vector<int>&arr){
    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]);
        //lets mark all element wwhich is present in array 
        if (arr[index-1]>0)
        {
            arr[index-1] *= -1;
        }
        //here we can say , all positive +ve indexes are missing from arrys

/**
 * 
 * Basically hm es program me jo bhi array me element present hai uski position par jo bhi vaalue hai usko -ve 
 * se mark kar de rhe hai aaur last me jo bhi value positive me baachega wahi hamara answer hoga. Dhanyavad!!!
 * 
*/
        
    }
    
}

int main(){

    std::vector<int>arr {1,1,2,3,5,5};  //here we can see , 4 is missing and (arr -> [1, N])
    
    int miss = fidnMissingElement(arr);
    // cout<<"Missing element is: "<<miss;

        //printing array after sorting 
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }

    //here we can say , all positive +ve indexes are missing from arrys
    cout<<endl<<endl;
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]>0)
        {
            cout<<"Missing is "<<i+1<<endl;
        }
        
    }
    

     return 0;
}