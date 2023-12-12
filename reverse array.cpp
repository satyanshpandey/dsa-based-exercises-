#include<iostream>
using namespace std;

int main(){

    int arr[] = {10,20,30,40,50,60,70,80};
    int size = 8;
    int start = 0;
    int end = size - 1;

    while (true)        
    {
        /* code */
        if (end == start)   
        {
            /* code */
            cout<<arr[end]<<" ";
            break;
        }
        cout<<arr[end]<<" ";
        end--;
    }
    

    return 0;
}