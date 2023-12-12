#include<iostream>
#include<vector>
using namespace std;





int main(){

int arr[] = {1,2,3,4,5,6};
int size_Aa = 6;

int arr2[] = {7,8,9,0};
int size_arr2 = 4;

vector<int>ar;

// inserting frist array into vector and after that we will insert 2nd into 
for (int i = 0; i < size_Aa; i++)
{
    /* code */
    ar.push_back(arr[i]);
}

for (int i = 0; i < size_arr2; i++)
{
    /* code */
    ar.push_back(arr2[i]);
}

// now our union is ready and we will print element 
for (int i = 0; i < ar.size(); i++)
{
    /* code */
    cout<<ar[i]<<" ";
}



}