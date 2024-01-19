#include<iostream>
using namespace std;

int main(){

    // replace all the value of an array  with 1 . 
    // int arr[5] = {1,2,3,4,5};
    
    // for(int i=0;i<5;i++){
    //     arr[i] = 1;

    // }
    // printing all values 
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
cout<<endl;

// cout<<"Playing with arrays "<<endl<<endl;
//     // lets check with empty arrays values 
//     int arr11[10] = {1,2,3};
//     cout<<"Checking arrays empty memory  locations garbage value:"<<arr11[5]<<endl;
//     for(int i=0;i<10;i++){
//         cout<<arr11[i]<<" ";
//     }


// lets check garbage value 
// int arr[20];
// for(int i=0;i<20;i++){
//     cout<<arr[i]<<" ";
// }

cout<<endl;
cout<<endl;
// check with empty  arrays 

// int ar[20] = {};
// for(int i=0;i<20;i++){
//     cout<<ar[i]<<" ";
// }
cout<<endl;
cout<<endl;
// check with the single assign value in an 10 memory  block arrays 

// int arrr[20] = {1};
// for(int i=0;i<20;i++){
//     cout<<arrr[i]<<" ";
// }


// lets see memset in cpp 
int arr[11];
memset(arr , 1  , arr);

for(int i=0; i<11;i++){
    cout<<arr[i]<<" ";
}


}