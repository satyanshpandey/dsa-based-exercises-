#include <cstdlib>
#include <iostream>
#include <limits>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <vector>
#include <cstdlib>
#include<algorithm>

using namespace std;

int main(){
// method no.2 
    // vector<int>arr = {1,2,3,4,4};
    // sort(arr.begin(),arr.end());
    // for (int i = 0; i < arr.size()-1; i++)
    // {
    //     if (arr[i] == arr[i+1])
    //     {
    //         cout<<"Duplicate element is: "<<arr[i];
    //         break;
    //     }
        
    // }
    


///////////////////////////----method no 1 :
// visited method 
// vector<int>arr {1,2,3,4,4};

// for (int i = 0; i < arr.size(); i++)
// {
//     // creating index off index 
//     int index = abs(arr[i]);

//     if (arr[index]<0)
//     {
//         cout<<"Repeated element is:"<<index<<endl;
//         break;
//     }
//     //visited markinng 
//     arr[index] *= -1;
    
// }





// method no. 3
// /*  //good approach 

    vector<int>arr = {2,3,1,4,4}; //[1,3,2,4,4] -> [3,1,2,4,4] -> [4,1,2,3,4] -> arr[0] == arr[arr[0] -> while loop will stop execution.
    while (arr[0]!=arr[arr[0]])
    {
        swap(arr[0],arr[arr[0]]);
    }
    // return arr[0];
    cout<<arr[0];
// **/
}