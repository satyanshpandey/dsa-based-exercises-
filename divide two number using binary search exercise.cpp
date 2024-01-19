#include<iostream>
#include<vector>
using namespace std;

int solve(int dividend, int divisor){
    int s = 0;
    int e = dividend;
    int mid = s + (e - s)/2;
    int ans = 1;

    while (s<=e)
    {
        if (mid*divisor == dividend)
        {
            return mid;
        }
        if (mid*divisor>dividend)
        {
            //left search 
            e = mid - 1;

        }
        else{
            //store ans
            ans = mid;
            //right search 
            s = mid + 1;
        }        
        // update mid 
        mid = s + (e - s)/2;
    }
    return ans;
    

}


int main(){
    int dividend = 22;
    int divisor = 7;

    int ans = solve(dividend, divisor);
    cout<<"Ans is--->:"<<ans<<endl;
    return 0;
}