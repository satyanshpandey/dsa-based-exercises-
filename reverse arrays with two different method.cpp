#include<iostream>
#include<vector>
using namespace std;

int main(){


// first method using indexing 
    vector<int>arr = {10,20,30,40,50,60,70,80};
    int start = 0;
    int end = arr.size() - 1;

    for(int i=0; i<arr.size();i++){
        cout<<arr[end]<<" ";
        end--;
    }

// -----------------------------------------------------------------------------------------

    // 2nd method using swapping 
    // in this method we will swap extreme element of the arrays 

    // lets explore 
    vector<int>ar = {11,22,33,44,55,66,77,88,99};
    int strt = 0;
    int en_d = ar.size()-1;

    while (strt<=en_d)   
    {
        /* code */
        swap(ar[strt], ar[en_d] );
        strt++ ;
        en_d--;
    }
    
cout<<endl<<"Swapping is:: ";
    for (int i = 0; i < ar.size(); i++)
    {
        /* code */
        cout<<ar[i]<<" ";
    }
    



// ------------------------------------------------------------------------------------------

    // lets try to swap without using predefined swap function 
    vector<int>arr2 = {1,2,3,4,5,6,7,8,9};
    int str = 0;
    int ed = arr2.size()-1;

    int swap;


// lets start swapping using while loop , and we will swap only ectreme element of the array 
    while (str<=ed)     
    {
        /* code */
        swap = arr2[str];
        arr2[str] = arr2[ed];
        arr2[ed] = swap;

        str++;
        ed--;
    } 
    
cout<<"After swapping arr2:"<<endl;
for (int i = 0; i < arr2.size(); i++)
{
    /* code */
    cout<<arr2[i]<<" ";
}



    return 0;
}