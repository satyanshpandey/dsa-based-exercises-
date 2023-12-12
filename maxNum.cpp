// in this program we will find the maximum number of an array 
#include<iostream>
using namespace std;


// lets define function for linear search 
bool find(int arr[] , int size , int key){
    for(int i=0; i<size ; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}


int main(){


// linear search  in cpp 
int arr[] = {33,45,34,56,674,34,34,55,55,33,1};
int size = 11;

cout<<"Enter key:"<<endl;
int key;
cin>>key;

// call function 
if(find(arr,size, key)){
    cout<<"Found!"<<endl;
}
else{
    cout<<"Not found!";
}
    

    return 0;
}