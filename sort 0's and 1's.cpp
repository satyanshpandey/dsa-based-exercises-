#include<iostream>
#include<vector>
using namespace std;


void printswap(vector<int>arr ){
    for (int i = 0; i < arr.size(); i++)
{
    /* code */
    cout<<arr[i]<<" ";
}
}

int main(){


vector<int> arr {0,1,1,0,0,1,0,1,1};
int start = 0;
int end = arr.size()-1;
int i = 0;

// porinting unserted value 
for (int i = 0; i < arr.size(); i++)
{
    /* code */
    cout<<arr[i]<<" ";
}
cout<<endl<<endl;
cout<<"start value:: "<<start<<"\ni count is:: "<<i<<endl<<endl;
while (i<end)
{
    /* code */

    // checking for 0's and swap it 
    if (arr[i] == 0)
    {
        /* code */
        swap(arr[i],arr[start]);
        start++;
        i++;
        // swapping workflow one by one 
        printswap(arr);cout<<endl;
        cout<<"Start++ value:"<<start<<endl;
        cout<<"i++ count is: "<<i<<endl;
        cout<<endl;
    }

    // checking for 1's and swap it later 
    if (arr[i] == 1)
    {
        /* code */
        swap(arr[i],arr[end]);
        end--;
        // swapping workflow one by one 
        printswap(arr);cout<<endl;
        cout<<"End value is:"<<end<<endl;
        cout<<endl;
    }
}

// printing sorted arrays values 
for (int i = 0; i < arr.size(); i++)
{
    /* code */
    cout<<arr[i]<<" ";
}
cout<<endl;




}