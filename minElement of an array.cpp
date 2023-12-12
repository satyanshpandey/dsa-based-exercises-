#include<iostream>
using namespace std;
#include<limits.h>



int main(){


int arr[] = {22,32,4,34,34,5,43,3,2,0};
int maxE = INT_MIN;
int minE = INT_MAX;
int size = 10;


// lets check , what it is printing ?
cout<<" iNT MIN ELEMENT: "<<maxE<<endl;
cout<<" INT MAX ELEMENT: "<<minE<<endl;


// lets compare and update the value .
for(int i=0; i<size;i++){
    if(arr[i]>maxE){
        maxE = arr[i];
    }
}
cout<<"Maximum element is : "<<maxE<<endl;
    return 0;
}