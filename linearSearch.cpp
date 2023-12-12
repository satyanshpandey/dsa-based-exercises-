#include<iostream>
using namespace std;


// let's  define find function's functionality .
bool find(int arr[] , int size , int key){
    for(int i=0; i<size  ; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){

int arr[] = {8,7,6,5,4,3,2,1,77,66,44,33,22};
int size = 13;
int key = 66; //this is key is value which we will search in array.

// we call find function for checking .
if(find(arr , size , key)){
    cout<<"Find";
}
else{
    cout<<"Not found!";
}


}



/**


#include <iostream>
using namespace std;

// define function for linear search in an arrays 
bool LinearSearch(int arr[] , int size , int search){
    for(int i=0; i<size;i++){
        if(arr[i] == search){
            return true;
        }
    }
    return false;
}

int main(){

    //define arrays 
    int arr[] = {6,5,4,3,2,2,4,45,4,5,656,5};
    int size = 12;
    int search;

    cout<<"Enter number tobe searched: "<<endl;
    cin>>search;

    if(LinearSearch(arr, size, search)){
            cout<<"Found!";
    }
    else{
        cout<<"Not Found!";
    }

    
}


*/