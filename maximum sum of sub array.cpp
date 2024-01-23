#include<iostream>
#include<vector>
using namespace std;

int counting(vector<int>arr){
    //kadan's algorithm 
    int sum = 0;
    int max_i = arr[0];


    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + arr[i];
        max_i = max(sum,max_i);
        if (sum<0)
        {
            sum=0;
        }
        
    }
    
    return max_i;
}

int main(){


    vector<int>arr {-2,1,-3,4,-1,2,1,-5,4};

    int TOTALsum_is = counting(arr);
    cout<<"MAximum sum of sub array is: "<<TOTALsum_is<<endl;
}
