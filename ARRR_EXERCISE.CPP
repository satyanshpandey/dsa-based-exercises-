#include<iostream>
using namespace std;

// lets declare and define the passed arrays into the called function .
void printArray(int arr[] , int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void increase(int arr[] , int size){

        arr[0] = arr[0]+10;

        printArray(arr , size);
}


int main(){

//defining array
int arr[] = {5,6};
int size = 2;

// calling function 
increase(arr , size); //call the function with 2 parameter, one is ARRAY and 2nd is sixe of the given array.


// again calling another function
printArray(arr, size); //we call here function with 2 parameter , one is array and 2nd one is size of the array.


    return 0;
}

