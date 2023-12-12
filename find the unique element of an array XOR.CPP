#include<iostream>
#include<vector>
using namespace std; 

int findUnique(vector<int>arr){
    int start = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        start = start ^ arr[i];
        cout<<"start value loop checking-> "<<start<<endl;
    }
    return start;
    
}


int main(){

    vector<int> arr = {5,5,11,22,33,44,55,44,33,22,11};
    int uniqueElement = findUnique(arr);

    cout<<"In this program we are finding unique element of the array using XOR operation."<<endl;
    cout<<"Unique element is: "<<uniqueElement<<endl;

}