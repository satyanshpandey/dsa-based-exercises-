#include<iostream>
using namespace std;
#include<limits.h>

int main(){
// we write program for Extreme print in array 

int arr[] = {11,22,33,44,55,66,77,88,99};

int size = 9;
int start = 0;
int end = size - 1;

while (true)
{
    /* code */
    if(start>end)
        break;
    // check for odd number of arrays element 
    if (start == end)
    {
        /* code */
        cout<<arr[end]<<" ";
        break;
    }
    cout<<arr[start]<<" ";
    cout<<arr[end]<<" ";
    start++;
    end--;
    }
}