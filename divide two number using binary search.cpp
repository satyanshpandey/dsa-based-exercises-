#include<iostream>
#include<vector>
using namespace std;

int DivideNumberBinarySearch(int dividend,int divisor){
    int s = 0;
    int e = dividend;
    int m = s + (e - s)/2;
    int ans = 1;

    while (s<=e)
    {
        if (m*divisor == dividend)
        {
            return m;
        }
        if (m*divisor > dividend)
        { 
            //left search 
            e = m-1;
        }
        else //if (m*divisor < dividend)
        {
            // save answer 
            ans = m;
            //right search for more posiblity 
            s = m+1;
        }
        

        //update mid 
        m = s + (e - s)/2;        
    }
    return ans;
    
}


int main(){

    int dividend = 22;
    int divisor = 7;
    int ans = DivideNumberBinarySearch(dividend , divisor);
    cout<<"Ans is "<<ans;
    return 0;

}