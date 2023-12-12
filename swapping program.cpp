#include<iostream>
using namespace std;

int main(){
    int swap ;
    int a = 11;
    int b = 22;
    cout<<"A and B value before swapping: "<<"a: "<<a<<" b: "<<b<<endl;

    swap = a;
    a = b;
    b = swap;
    cout<<"A and B value after swapping: "<<"a: "<<a<<" b: "<<b<<endl;

}