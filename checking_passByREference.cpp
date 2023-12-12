#include<iostream>
using namespace std;



void printF(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void incrementF(int arr[],int size){
    for(int i=0; i<size;i++){
        arr[i] = arr[i] + 10;
        //call print function for checking value 
    }printF(arr,size);
}




int main(){



    int arr[] = {5,6};
    int size = 2;

    //calling array printing function 
    // printF(arr, size);
    incrementF(arr,size);
    printF(arr,size);
}