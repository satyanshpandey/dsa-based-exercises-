#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    // vector<int>arr {1,2,3,4,5,5,5,5,5,5,5,5,5,5,5,5,7,9};
    vector<int>arr {1,2,2,2,2,2,2,2,2,2,2};
    int occ = 0;

    //first occurance we are using 'lower_bound' !
    auto first_occ = lower_bound(arr.begin(),arr.end(), 2); //this line will return first occurence index of target element.

    //last occurance of target element. using 'upper_bound' . STL function 
    auto last_occ = upper_bound(arr.begin(),arr.end(),2); //this line will return last occurence index no. of target element .
   

    // for find the total no. of occurence 
    // we need to subtract index of 'last occurene' to 'first occurence' .
    // last_occ - first_occ + 1;
    occ = last_occ - first_occ ;
    cout<<"Total no. of target element occurence is: "<<occ<<endl;
    return 0;
}