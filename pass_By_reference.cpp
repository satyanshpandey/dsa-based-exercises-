#include<iostream>
using namespace std;


// declaring function and declaring functions.  
void printArrays( int arr[] , int size ){
    for(int i=0; i<2;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


// again we are decalring  an function  which will perform on arrays function 
void increment(int arr[], int size){
    arr[0] = arr[0]+11;
    //calling again print array function for checking 'pass by reference'
    cout<<"This is calling from 'increment' function. "<<endl;
    printArrays(arr, size);   
}

int main(){
int arr[] = {3,4};
int size = 2;

// calling function 
increment(arr, size);



// calling function  for printing arrays values 
printArrays(arr , size);




}