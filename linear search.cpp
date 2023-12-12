#include<iostream>
using namespace std;

// lets see how can we operate linear search operation in cpp 


// here we are making function for linear search 
bool find(int arr[] ,int key , int size){
    for(int i=0; i<size;i++){
        if(arr[i] == key){
            return true;
        }
            }
            return false;
}

int main(){
    
    
    int arr[] = {33,22,223,34,34,53,4545,1,2,3};
    int size = 10;
    
    cout<<"Enter key to find"<<endl;
    int key;
    cin>>key ;

    // lets call find function for seearching 
    if(find(arr, key, size)){
        cout<<"Found!!!"<<endl;
    }else{
        cout<<"Not found!";
    }
  
}