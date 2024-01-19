#include<iostream>
#include<vector>
using namespace std;


int BinarySearchSquare(int num){
    int start = 0;
    int end = num;
    int mid = start + (end - start)/2;
    int target = num;

    int ans = 0;
    while (start<=end)  
    {
        if (mid*mid == target)
        {
            return mid;
        }   
        else if (mid*mid > target)
        {
            end = mid-1;
        }
        else if (mid*mid<target)
        {
            ans = mid;
            start = mid+1;

        }
        mid = start + (end - start)/2;
        
        
    }
    return ans;
    
}

int main(){

    int num;
    cout<<"Enter number: ";
    cin>>num;

    int sqrtt = BinarySearchSquare(num);

    cout<<"Square root is: "<<sqrtt<<endl;


    int precision;
    cout<<"Enter the number of floating digits in precision: ";
    cin>>precision;

    double finalAnswer = sqrtt;
    double step = 0.1;

    for (int i = 0; i < precision; i++)
    {
        for (double j = finalAnswer; j*j <= num; j = j + step)
        {
            /* code */
            finalAnswer = j;
        }
        step = step/10;
        
    }

    cout<<"Final answer is: "<<finalAnswer<<endl;
    



    return 0;
}