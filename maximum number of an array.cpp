#include<iostream>
using namespace std;
#include<limits.h>

int main(){


    int arr[] = {34,23,34,45,344,556,6,76,67,56,4,1};
    int max_Int = INT_MIN;
    int size = 12;
    for(int i=0; i<size;i++){
        if (arr[i]>max_Int){
            max_Int=arr[i];
        }
    }
    cout<<"Maximum number is: "<<max_Int<<endl;

    return 0;
}