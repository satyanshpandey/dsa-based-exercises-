#include<iostream>

using namespace std;

int main(){

// creating array 
int arr[] = {1,2,3,4,5};

//accessing array.
cout<<"Printing arr index 1 value "<<arr[1]<<endl;

// accessing all element of the arrays 
for(int n=0;n<5;n=n+1){
    cout<<"array value is: "<<arr[n]<<endl;
}

cout<<endl<<"Creating array with user input: "<<endl;

// creating array 
int arrr2[10];

for(int n=0;n<10;n = n+1){
    cout<<"Enter value: ";
    cin>>arrr2[n];
}

// printing all array data 
for(int i=0;i<10;i++){
    cout<<arrr2[i]<<" ";
}
}