#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){


// vector<int>ar1 = {1,2,3,4,5,6,7};
// vector<int>ar2 = {6,7,8,9};

// vector<int>unionArray;

// for (int i = 0; i < ar1.size(); i++)
// {
//     /* code */
//     unionArray.push_back(ar1[i]);
// }

// for (int i = 0; i < ar2.size(); i++)
// {
//     /* code */
//     int element = ar2[i];
//     for (int j = 0; j < unionArray.size(); j++)
//     {
//         /* code */
//         if (element == unionArray[j])
//         {
//             /* code */
//             // continue;
//             break;
//         }
//         else if (element!=unionArray[j])
//         {
//             /* code */
//             unionArray.push_back(ar2[i]); break;
            

//         }
        
        
//     }
    
// }

vector<int>ar1 = {1,2,3,4,5,6,7};
vector<int>ar2 = {6,7,8,9};
vector<int>unionArray;
for (int i = 0; i < ar1.size(); i++)
{
    /* code */
    unionArray.push_back(ar1[i]);
}


//printing union of two arrays 
for(int values: unionArray){
    cout<<values<<" ";
}


}