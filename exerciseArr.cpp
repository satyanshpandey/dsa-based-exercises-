#include<iostream>
using namespace std;

int main(){

    cout<<"Hello world"<<endl;

    int ar[] = {1,2,3,4,5};// we will check this array 1st index value address. and wwhole array address.
    int ar2[3]={};
    int ar3[3] = {1,2};

cout<<"checking whole array address:"<<ar<<endl;
cout<<"Checking 1st index memory address: "<<&ar[0]<<endl;

cout<<"Let's check , if we are not fill full Array element , then remaning array what will print?"<<endl;
cout<<ar2[1]<<" "<<ar2[2]<<endl;
cout<<"array 3: "<<ar3[1]<<" "<<ar3[2]<<endl;



// lets print all element of an array 

for(int i=0; i <5;i++){
    cout<<ar[i]<<" ";
} 



    return 0;
}