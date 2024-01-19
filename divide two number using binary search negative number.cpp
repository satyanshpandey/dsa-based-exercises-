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
        if (abs(mid*divisor) == abs(dividend))
        {
            //handling special case...........
            // if (dividend<0 || divisor<0)
            // {
            //     return -mid;
            // }
            // else
            //     return mid;

            // or , we also can do this..........
            ans = mid;
            break;
            
        }
        if (abs(mid*divisor)>abs(dividend))
        {
            //left search.................
            e = mid - 1;

        }
        else{
            //store ans............
            ans = mid;
            //right search................
            s = mid + 1;
        }        
        // update mid................
        mid = s + (e - s)/2;
    }


// lets solve negaative case............
    if ((divisor<0 && dividend<0 || divisor>0 && dividend>0))
    {
        return ans;
    }
    else{
        return -ans;

    }
}


int main(){
    int dividend = 100;
    int divisor = -10;

    int ans = solve(dividend, divisor);
    cout<<"Ans is:"<<ans<<endl;
    return 0;
}